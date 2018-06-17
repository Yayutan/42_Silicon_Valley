/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 20:18:42 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/31 21:53:38 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	print_err_nm(char *file)
{
	int	len;

	len = 0;
	while (file[len])
		len++;
	write(1, "cat: ", 5);
	write(1, file, len);
	write(1, ": ", 2);
	if (errno == 21)
		write(2, "Is a directory\n", 15);
	else if (errno == 13)
		write(2, "Permission denied\n", 18);
	else
		write(2, "No such file or directory\n", 26);
}

void	open_no_file(void)
{
	char	buffer[BUF_SIZE];
	int		rd;

	while ((rd = read(0, buffer, BUF_SIZE)))
		write(1, buffer, rd);
}

void	open_read(char *file_nm)
{
	char	buffer[BUF_SIZE];
	int		fd;
	int		rd;

	if (file_nm[0] == '-' && !file_nm[1])
		open_no_file();
	else
	{
		fd = open(file_nm, O_RDWR);
		if (fd >= 0)
		{
			while ((rd = read(fd, buffer, BUF_SIZE)))
				write(1, buffer, rd);
			close(fd);
		}
		else
			print_err_nm(file_nm);
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1 && argv[1][0] == '-' &&
			argv[1][1] == '-' && argv[1][2] == '\0')
		i++;
	if (i == argc)
		open_no_file();
	while (i < argc)
	{
		open_read(argv[i]);
		i++;
	}
	return (0);
}
