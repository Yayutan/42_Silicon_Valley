/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:32:57 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:33:23 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <stdlib.h>

typedef struct		s_stack
{
	struct s_stack	*next;
	char			data;
}					t_stack;

t_stack				*s_new_ele(char data);
void				s_push_front(t_stack **st, char data);
char				s_peek(t_stack *st);
char				*s_pop(t_stack **st);
#endif
