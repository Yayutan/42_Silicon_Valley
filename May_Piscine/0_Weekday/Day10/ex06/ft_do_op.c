/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:32:22 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/29 23:15:32 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	(*g_operators[6])(int, int);

void	calculate(char **argv)
{
	if (argv[2][1] != '\0')
		(*g_operators[5])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '-')
		(*g_operators[0])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '+')
		(*g_operators[1])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '*')
		(*g_operators[2])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '/')
		(*g_operators[3])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else if (argv[2][0] == '%')
		(*g_operators[4])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		(*g_operators[5])(ft_atoi(argv[1]), ft_atoi(argv[3]));
}

int		main(int args, char **argv)
{
	g_operators[0] = &ft_sub;
	g_operators[1] = &ft_add;
	g_operators[2] = &ft_mul;
	g_operators[3] = &ft_div;
	g_operators[4] = &ft_mod;
	g_operators[5] = &ft_usage;
	if (args != 4)
		return (0);
	else
		calculate(argv);
	return (0);
}
