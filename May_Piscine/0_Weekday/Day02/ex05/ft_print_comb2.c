/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 20:45:38 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/17 21:59:40 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
char g_f_str_f;
char g_f_str_s;
char g_s_str_f;
char g_s_str_s;
int g_f_num;
int g_s_num;

void	increment_num1(void)
{
	if (g_f_str_s != '9')
	{
		g_f_str_s++;
	}
	else
	{
		g_f_str_f++;
		g_f_str_s = '0';
	}
}

void	increment_num2(void)
{
	if (g_s_str_s != '9')
	{
		g_s_str_s++;
	}
	else
	{
		g_s_str_f++;
		g_s_str_s = '0';
	}
}

void	next_group(void)
{
	if (g_s_str_f == '9' && g_s_str_s == '9')
	{
		g_f_num++;
		g_s_num = 0;
		g_s_str_f = '0';
		g_s_str_s = '0';
		increment_num1();
	}
	else
	{
		g_s_num++;
		increment_num2();
	}
}

void	ft_print_comb2(void)
{
	g_f_str_f = '0';
	g_f_str_s = '0';
	g_s_str_f = '0';
	g_s_str_s = '0';
	g_f_num = 0;
	g_s_num = 0;
	while (g_f_num < 99)
	{
		if (g_s_num > g_f_num)
		{
			ft_putchar(g_f_str_f);
			ft_putchar(g_f_str_s);
			ft_putchar(' ');
			ft_putchar(g_s_str_f);
			ft_putchar(g_s_str_s);
			if (g_f_num == 98)
			{
				break ;
			}
			ft_putchar(',');
			ft_putchar(' ');
		}
		next_group();
	}
}
