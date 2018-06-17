/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 02:06:59 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/01 02:26:02 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	void *result_lft;
	void *result_right;

	if (!root)
		return (NULL);
	if (root->left)
	{
		result_lft = btree_search_item(root->left, data_ref, cmpf);
		if (result_lft)
			return (result_lft);
	}
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (root->right)
	{
		result_right = btree_search_item(root->right, data_ref, cmpf);
		if (result_right)
			return (result_right);
	}
	return (NULL);
}
