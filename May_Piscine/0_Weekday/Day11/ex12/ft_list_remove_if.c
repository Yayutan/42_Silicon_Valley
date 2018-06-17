/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 20:36:57 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/30 08:44:57 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*place;
	t_list	*prev;

	place = *begin_list;
	prev = NULL;
	while (place)
	{
		if ((*cmp)(place->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = (*begin_list)->next;
			else if (place->next == NULL)
				prev->next = NULL;
			else
				prev->next = place->next;
		}
		else
			prev = place;
		place = place->next;
	}
}
