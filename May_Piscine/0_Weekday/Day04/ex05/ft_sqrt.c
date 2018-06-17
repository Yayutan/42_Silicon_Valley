/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 12:02:21 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/19 12:19:37 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		curr;
	int		result;

	curr = 1;
	result = nb / curr;
	if (nb == 1)
		return (1);
	while (curr < result)
	{
		curr++;
		result = nb / curr;
		if (curr == result && !(nb % curr))
		{
			return (curr);
		}
	}
	return (0);
}
