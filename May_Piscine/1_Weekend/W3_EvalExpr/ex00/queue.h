/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:10:49 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:14:16 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H
# include <stdlib.h>
# include "print_parse_helper.h"
# include "atoitoa.h"

typedef struct		s_list
{
	struct s_list	*next;
	char			*data;
}					t_queue;

t_queue				*q_new_ele(char *data);
char				*q_peek(t_queue *q);
char				*q_pop(t_queue **q);
void				q_push_back(t_queue **begin_list, char *data);
int					eval(t_queue *q);
#endif
