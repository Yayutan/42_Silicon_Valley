/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 19:04:31 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/29 19:57:13 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *place;
	t_list *prev;
	t_list *next;

	place = *begin_list;
	prev = NULL;
	while (place)
	{
		next = place->next;
		place->next = prev;
		prev = place;
		place = next;
	}
	*begin_list = prev;
}
