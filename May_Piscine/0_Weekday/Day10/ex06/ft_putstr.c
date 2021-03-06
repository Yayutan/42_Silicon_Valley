/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:44:59 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/28 20:34:11 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"

void	ft_putstr(char *str)
{
	if (str[0] != '\0')
	{
		ft_putchar(str[0]);
		ft_putstr(str + 1);
	}
}
