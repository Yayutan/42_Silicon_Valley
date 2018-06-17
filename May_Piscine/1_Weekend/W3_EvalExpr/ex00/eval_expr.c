/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 11:45:55 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:09:04 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		fill_in(char **str, int index, char **eq)
{
	(*str)[index] = **eq;
	if (**eq != '\0')
		*eq = *eq + 1;
	return (index + 1);
}

char	*next_tok(char **eq)
{
	char		*tok;
	static int	prev_turn_op = 1;
	int			i;

	tok = (char*)malloc(sizeof(*eq));
	i = 0;
	if (prev_turn_op && p_lv(**eq) == 2)
		i = fill_in(&tok, i, eq);
	if (p_lv(**eq) == 0)
	{
		prev_turn_op = 0;
		while (p_lv(**eq) == 0)
			i = fill_in(&tok, i, eq);
	}
	else
	{
		if (p_lv(**eq) >= 2 || **eq == '(')
			prev_turn_op = 1;
		else
			prev_turn_op = 0;
		i = fill_in(&tok, i, eq);
	}
	tok[i] = '\0';
	return (tok);
}

void	operate(t_stack **st, t_queue **q, char op)
{
	if (op != ')')
	{
		if (p_lv(op) == 2)
		{
			while (*st != NULL && s_peek(*st) != '(')
				q_push_back(q, s_pop(st));
		}
		else if (p_lv(op) == 3)
		{
			while (*st != NULL && s_peek(*st) != '('
			&& s_peek(*st) != '+' && s_peek(*st) != '-')
				q_push_back(q, s_pop(st));
		}
		s_push_front(st, op);
	}
	else
	{
		while (s_peek(*st) != '(')
			q_push_back(q, s_pop(st));
		s_pop(st);
	}
}

int		eval_expr(char *eq)
{
	t_stack	*st;
	t_queue	*q;
	char	*tok;

	st = NULL;
	q = NULL;
	eq = rm_white_space(eq);
	while (*eq != '\0')
	{
		tok = next_tok(&eq);
		if (p_lv(tok[0]) == 0 ||
		(p_lv(tok[0]) == 2 && tok[1] != '\0'))
			q_push_back(&q, tok);
		else if (p_lv(tok[0]) >= 2 || tok[0] == ')')
			operate(&st, &q, tok[0]);
		else if (tok[0] == '(')
			s_push_front(&st, '(');
	}
	while (st != NULL)
		q_push_back(&q, s_pop(&st));
	return (eval(q));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
