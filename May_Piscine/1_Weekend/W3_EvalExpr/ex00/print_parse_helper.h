/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_parse_helper.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:10:07 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:10:24 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_PARSE_HELPER_H
# define PRINT_PARSE_HELPER_H
# include <unistd.h>
# include <stdlib.h>

char	*rm_white_space(char *str);
int		p_lv(char c);
void	ft_putnbr(int nb);
int		ft_putchar(char c);
#endif
