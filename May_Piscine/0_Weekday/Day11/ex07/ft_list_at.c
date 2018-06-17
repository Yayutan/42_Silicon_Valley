/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 17:51:01 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/29 19:02:48 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *place;

	place = begin_list;
	if (!place)
		return (NULL);
	while (nbr > 0)
	{
		if (!place)
			return (NULL);
		place = place->next;
		nbr--;
	}
	return (place);
}
