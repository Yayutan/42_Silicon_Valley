/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 20:49:15 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/19 20:51:11 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		curr;
	int		quot;

	if (nb <= 1)
		return (0);
	curr = 2;
	quot = nb / curr;
	while (curr <= quot)
	{
		if (!(nb % curr))
			return (0);
		curr++;
		quot = nb / curr;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
