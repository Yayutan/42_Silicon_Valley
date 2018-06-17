/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:51:58 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/29 22:28:45 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include <unistd.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *org);
void	ft_add(int n1, int n2);
void	ft_sub(int n1, int n2);
void	ft_mul(int n1, int n2);
void	ft_div(int n1, int n2);
void	ft_mod(int n1, int n2);
void	ft_usage(int n1, int n2);
#endif
