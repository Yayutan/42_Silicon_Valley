/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 22:05:07 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/17 23:34:44 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	map(int i)
{
	char to_return;

	to_return = '0';
	while (i > 0)
	{
		to_return++;
		i--;
	}
	return (to_return);
}

void	ft_putnbr(int nb)
{
	int temp;
	int digits;
	int base;
	int number;

	number = nb;
	digits = 0;
	base = 1;
	while (nb > 0)
	{
		digits++;
		base *= 10;
		nb = nb / 10;
	}
	base /= 10;
	while (digits > 0)
	{
		temp = number / base;
		ft_putchar(map(temp));
		number -= base * temp;
		base /= 10;
		digits--;
	}
}
