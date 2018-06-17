/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:11:27 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/30 17:14:31 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *tmp;

	if (*begin_list1 == NULL)
		*begin_list1 = begin_list2;
	else
	{
		tmp = *begin_list1;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = begin_list2;
	}
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

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
