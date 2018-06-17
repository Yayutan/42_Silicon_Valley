/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:25:34 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/31 23:26:55 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

char	*trim(char *str)
{
	int		curr;

	curr = 0;
	while (str[curr] != '\0')
	{
		if (str[curr] >= '0' && str[curr] <= '9')
			return (str + curr);
		else if (str[curr] == '-' || str[curr] == '+')
			return (str + curr);
		else if (str[curr] != '\t' && str[curr] != '\n' && str[curr] != '\v' &&
				str[curr] != '\f' && str[curr] != '\r' && str[curr] != ' ')
		{
			g_valid_num = 0;
			return ("");
		}
		curr++;
	}
	return ("");
}

int		complex_atoi(char *str, char *org)
{
	int		curr;
	int		result;
	int		neg;

	curr = 0;
	result = 0;
	neg = -1;
	if (str[0] == '+' && org[0] != ' ')
		neg = 1;
	if (str[0] == '-' && org[0] == ' ')
		g_special_neg_space = 1;
	if (org[0] == '+' && org[1] == '0')
		g_is_plus_zero = 1;
	if (str[0] == '+' || str[0] == '-')
		curr++;
	while (str[curr] != '\0' && g_valid_num)
	{
		if (str[curr] >= '0' && str[curr] <= '9')
			result = result * 10 + (str[curr] - '0');
		else
			g_valid_num = 0;
		curr++;
	}
	return (result * neg);
}

void	print_file(int byte, char *file)
{
	int		variables[5];
	char	buffer[1024];

	variables[2] = open(file, O_RDWR);
	if (variables[2] >= 0)
	{
		variables[4] = file_size(variables[2]);
		variables[2] = open(file, O_RDWR);
		variables[0] = byte - 1;
		if (byte <= 0)
			variables[0] = variables[4] + byte;
		if (g_is_plus_zero)
			variables[0] = 0;
		variables[1] = 0;
		while ((variables[3] = read(variables[2], buffer, 1)))
		{
			if (variables[1] >= variables[0])
				write(1, buffer, variables[3]);
			variables[1] += variables[3];
		}
		close(variables[2]);
	}
	else
		print_err_nm(file, errno);
}

void	print_all(int byte, int ac, char **av)
{
	int	i;
	int fd;
	int pre_fd;

	i = 3;
	pre_fd = 0;
	while (i < ac)
	{
		fd = open(av[i], O_RDWR);
		if (fd >= 0)
		{
			if (ac > 4 && i > 3 && pre_fd >= 0)
				write(1, "\n", 1);
			if (ac > 4)
				print_name(av[i]);
			if (!g_special_neg_space)
				print_file(byte, av[i]);
		}
		else
			print_err_nm(av[i], errno);
		pre_fd = fd;
		close(fd);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		bt_prt;
	char	buffer[1024];
	int		rd;

	rd = 0;
	g_valid_num = 1;
	g_special_neg_space = 0;
	g_is_plus_zero = 0;
	if (argc == 2)
		print_err_nm("", -1);
	else
	{
		bt_prt = complex_atoi(trim(argv[2]), argv[2]);
		if (!g_valid_num)
			print_err_nm(argv[2], -2);
		else if (argc == 3)
			while ((rd = read(0, buffer, 1024)))
				rd++;
		else
			print_all(bt_prt, argc, argv);
	}
	return (0);
}
