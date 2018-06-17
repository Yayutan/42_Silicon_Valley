/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:27:27 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/30 16:34:42 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		len;
	t_list	*place;

	len = 0;
	place = begin_list;
	while (place)
	{
		len++;
		place = place->next;
	}
	return (len);
}

void	swap_order(t_list *a, t_list *b)
{
	void *tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*place;
	t_list	*swap;
	int		len;
	int		i;
	int		j;

	if (!begin_list)
		return ;
	place = begin_list;
	len = ft_list_size(begin_list);
	place = begin_list;
	i = 0;
	while (i <= (len - 1) / 2)
	{
		j = 0;
		swap = begin_list;
		while (j < len - 1 - i)
		{
			swap = swap->next;
			j++;
		}
		swap_order(swap, place);
		place = place->next;
		i++;
	}
}
