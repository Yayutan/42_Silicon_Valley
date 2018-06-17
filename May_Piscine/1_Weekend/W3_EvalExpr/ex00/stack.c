/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:18:24 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:32:06 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack		*s_new_ele(char data)
{
	t_stack *ele;

	ele = (t_stack*)malloc(sizeof(*ele));
	ele->next = NULL;
	ele->data = data;
	return (ele);
}

void		s_push_front(t_stack **st, char data)
{
	t_stack *to_put;

	if (!(*st))
		*st = s_new_ele(data);
	else
	{
		to_put = s_new_ele(data);
		to_put->next = *st;
		*st = to_put;
	}
}

char		s_peek(t_stack *st)
{
	if (!st)
		return ('`');
	return (st->data);
}

char		*s_pop(t_stack **st)
{
	char *to_ret;

	to_ret = (char*)malloc(sizeof(*to_ret) * 2);
	if (!*st)
		return ("`");
	to_ret[0] = (*st)->data;
	to_ret[1] = '\0';
	*st = (*st)->next;
	return (to_ret);
}
