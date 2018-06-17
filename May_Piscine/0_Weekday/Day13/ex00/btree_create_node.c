/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 23:41:50 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/31 23:54:30 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *new_item;

	new_item = (t_btree*)malloc(sizeof(*new_item));
	if (!new_item)
		return (NULL);
	new_item->left = 0;
	new_item->right = 0;
	new_item->item = item;
	return (new_item);
}
