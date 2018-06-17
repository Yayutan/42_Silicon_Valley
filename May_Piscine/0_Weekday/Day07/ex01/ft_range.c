/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 02:15:44 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/24 10:16:30 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*to_ret;
	int		index;

	if (min > max)
		to_ret = NULL;
	else
		to_ret = (int*)malloc(sizeof(int) * (max - min));
	index = 0;
	while (index < (max - min))
	{
		*(to_ret + index) = min + index;
		index++;
	}
	return (to_ret);
}
