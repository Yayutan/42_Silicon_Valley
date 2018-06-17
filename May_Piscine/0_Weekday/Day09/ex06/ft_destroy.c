/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:26:40 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/25 12:13:15 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int		i;
	int		j;

	i = 0;
	while (factory[i] != NULL)
	{
		j = 0;
		while (factory[i][j] != NULL)
		{
			free(factory[i][j]);
			factory[i][j] = NULL;
			j++;
		}
		free(factory[i]);
		factory[i] = NULL;
		i++;
	}
	free(factory);
	factory = NULL;
}
