/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 02:26:14 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/24 10:16:51 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		index;

	if (min > max)
	{
		*(range) = NULL;
		return (0);
	}
	else
	{
		*range = (int*)malloc(sizeof(int) * (max - min));
	}
	index = 0;
	while (index < (max - min))
	{
		*(*(range) + index) = min + index;
		index++;
	}
	return (max - min);
}
