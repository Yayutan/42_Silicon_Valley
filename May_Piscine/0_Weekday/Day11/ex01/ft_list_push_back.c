/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:31:28 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/30 21:19:01 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_entry;
	t_list	*i;

	new_entry = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = new_entry;
	else
	{
		i = *begin_list;
		while (i->next)
			i = i->next;
		i->next = new_entry;
	}
}
