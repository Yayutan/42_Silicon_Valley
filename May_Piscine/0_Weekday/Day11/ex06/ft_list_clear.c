/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 16:58:29 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/30 21:00:21 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*place;

	if (!begin_list)
		return ;
	while (*begin_list)
	{
		place = *begin_list;
		*begin_list = (*begin_list)->next;
		free(place);
	}
	*begin_list = NULL;
}
