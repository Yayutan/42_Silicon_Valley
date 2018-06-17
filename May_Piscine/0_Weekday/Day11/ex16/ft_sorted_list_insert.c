/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:00:36 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/30 17:10:41 by mchuang          ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_item;
	t_list *temp;

	new_item = ft_create_elem(data);
	temp = *begin_list;
	*begin_list = new_item;
	new_item->next = temp;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_front(begin_list, data);
	ft_list_sort(begin_list, cmp);
}
