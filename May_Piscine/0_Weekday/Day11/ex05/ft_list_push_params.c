/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 16:00:50 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/29 16:48:57 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_item;
	t_list *temp;

	new_item = ft_create_elem(data);
	temp = *begin_list;
	*begin_list = new_item;
	new_item->next = temp;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*to_ret;

	i = 0;
	to_ret = NULL;
	while (i < ac)
	{
		ft_list_push_front(&to_ret, av[i]);
		i++;
	}
	return (to_ret);
}
