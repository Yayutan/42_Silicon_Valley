/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:23:53 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:29:15 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_queue		*q_new_ele(char *data)
{
	t_queue		*ele;

	ele = (t_queue*)malloc(sizeof(*ele));
	ele->next = NULL;
	ele->data = data;
	return (ele);
}

void		q_push_back(t_queue **q, char *data)
{
	t_queue		*new_entry;
	t_queue		*i;

	new_entry = q_new_ele(data);
	if (!*q)
		*q = new_entry;
	else
	{
		i = *q;
		while (i->next)
			i = i->next;
		i->next = new_entry;
	}
}

int			do_op(int n1, int n2, char op)
{
	if (op == '+')
		return (n1 + n2);
	if (op == '-')
		return (n1 - n2);
	if (op == '*')
		return (n1 * n2);
	if (op == '/')
		return (n1 / n2);
	if (op == '%')
		return (n1 % n2);
	return (42);
}

int			eval(t_queue *q)
{
	t_queue	*p;
	int		res;

	p = q;
	while (q->next)
	{
		if ((p->data[1] != '\0' || !p_lv(p->data[0]))
		&& (p->next->data[1] != '\0' || !p_lv(p->next->data[0]))
		&& (p_lv(p->next->next->data[0]) > 1 && p->next->next->data[1] == '\0'))
		{
			res = do_op(a_atoi(p->data), a_atoi(p->next->data),
					p->next->next->data[0]);
			p->data = a_itoa(res);
			p->next = p->next->next->next;
			p = q;
		}
		else
			p = p->next;
	}
	return (a_atoi(q->data));
}
