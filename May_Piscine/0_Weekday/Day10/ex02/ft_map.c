/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 16:12:13 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/28 17:01:33 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*to_ret;
	int		i;

	to_ret = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		to_ret[i] = f(tab[i]);
		i++;
	}
	return (to_ret);
}
