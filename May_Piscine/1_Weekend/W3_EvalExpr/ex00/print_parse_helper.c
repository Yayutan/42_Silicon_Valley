/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_parse_helper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:09:51 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:09:53 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_parse_helper.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int nb_copy;
	int nb_size;

	nb_size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb += 2000000000;
		}
		nb *= -1;
	}
	nb_copy = nb;
	while ((nb_copy /= 10) > 0)
		nb_size *= 10;
	while (nb_size > 0)
	{
		ft_putchar(nb / nb_size + '0');
		nb %= nb_size;
		nb_size /= 10;
	}
}

int		p_lv(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (3);
	else if (c == '+' || c == '-')
		return (2);
	else if (c == '(' || c == ')')
		return (1);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (-2);
}

char	*rm_white_space(char *str)
{
	int		i;
	int		j;
	char	*to_ret;

	i = 0;
	while (str[i])
		i++;
	to_ret = (char*)malloc(sizeof(*to_ret) * (i + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			to_ret[j] = str[i];
			j++;
		}
		i++;
	}
	to_ret[j] = '\0';
	return (to_ret);
}
