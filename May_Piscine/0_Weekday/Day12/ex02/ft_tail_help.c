/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_help.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:29:09 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/31 20:39:16 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail_help.h"

int		file_size(int fd)
{
	int		len;
	int		rd;
	char	buffer[1024];

	len = 0;
	while ((rd = read(fd, buffer, 1024)))
		len += rd;
	close(fd);
	return (len);
}

int		str_len(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	print_err_nm(char *file, int err)
{
	if (err == -1)
	{
		write(2, "tail: option requires an argument -- c\nusage: tail", 50);
		write(2, " [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n", 53);
	}
	else if (err == -2)
	{
		write(2, "tail: illegal offset -- ", 24);
		write(2, file, str_len(file));
		write(2, "\n", 1);
	}
	else if (err == 13 || err == 2)
	{
		write(2, "tail: ", 6);
		write(2, file, str_len(file));
		if (err == 13)
			write(2, ": Permission denied\n", 20);
		else if (err == 2)
			write(2, ": No such file or directory\n", 28);
	}
}

void	print_name(char *file)
{
	write(1, "==> ", 4);
	write(1, file, str_len(file));
	write(1, " <==\n", 5);
}
