/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:03:34 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/29 12:09:52 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *to_ret;

	to_ret = (t_list*)malloc(sizeof(t_list) * 1);
	to_ret->data = data;
	to_ret->next = NULL;
	return (to_ret);
}
