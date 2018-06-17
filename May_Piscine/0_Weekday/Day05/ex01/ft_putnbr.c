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
	if (str[0] != '\0')
	{
		ft_putchar(str[0]);
		ft_putstr(str + 1);
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
		divisor = find_divisor(nb);
		while (divisor >= 1)
		{
			ft_putchar((nb / divisor) + 48);
			nb = nb % divisor;
			divisor /= 10;
		}
	}
}
