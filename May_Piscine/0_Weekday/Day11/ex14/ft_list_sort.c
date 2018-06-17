/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 01:37:39 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/30 09:06:50 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	swap_order(t_list *a, t_list *b)
{
	void *tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		swap;
	t_list	*place;

	swap = 1;
	if (*begin_list)
	{
		while (swap)
		{
			swap = 0;
			place = *begin_list;
			while (place->next)
			{
				if ((*cmp)(place->data, place->next->data) > 0)
				{
					swap = 1;
					swap_order(place, (place->next));
				}
				place = place->next;
			}
		}
	}
}
