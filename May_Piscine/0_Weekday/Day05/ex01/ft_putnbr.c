/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:47:27 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 23:17:25 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (str[0] != '\0')
	{
		ft_putchar(str[0]);
		str++;
	}
}

int		find_divisor(int nb)
{
	if (!(nb / 10))
		return (1);
	return (10 * find_divisor(nb / 10));
}

void	ft_putnbr(int nb)
{
	int		divisor;

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= 1000000000)
		{
			ft_putchar((nb / 1000000000) + 48);
                        nb = nb % 1000000000;
		}
		divisor = find_divisor(nb);
		while (divisor >= 1)
		{
			ft_putchar((nb / divisor) + 48);
			nb = nb % divisor;
			divisor /= 10;
		}
	}
}
