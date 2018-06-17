/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 00:50:51 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/01 02:02:29 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree *new_item;

	new_item = btree_create_node(item);
	if (!root || !*root || !item)
	{
		if (root && item)
			*root = new_item;
		return ;
	}
	if (cmpf(item, (*root)->item) < 0)
	{
		if (!((*root)->left))
			(*root)->left = new_item;
		else
			btree_insert_data(&((*root)->left), item, cmpf);
	}
	else
	{
		if (!((*root)->right))
			(*root)->right = new_item;
		else
			btree_insert_data(&((*root)->right), item, cmpf);
	}
}
