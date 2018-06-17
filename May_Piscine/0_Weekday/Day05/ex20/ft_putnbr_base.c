/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 22:56:07 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 23:12:59 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int		find_divisor(unsigned int nb, int base)
{
	if (!(nb / base))
		return (1);
	return (base * find_divisor(nb / base, base));
}

void	ft_putnbr_base(int nb, char *base)
{
	int					base_n;
	int					divisor;
	unsigned int		masked_nb;

	base_n = check_base(base);
	if (base_n > 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			if (nb != -2147483648)
				nb *= -1;
		}
		if (nb == -2147483648)
			masked_nb = 2147483648;
		else
			masked_nb = (unsigned int)nb;
		divisor = find_divisor(masked_nb, base_n);
		while (divisor >= 1)
		{
			ft_putchar(base[(masked_nb / divisor)]);
			masked_nb = masked_nb % divisor;
			divisor /= base_n;
		}
	}
}
