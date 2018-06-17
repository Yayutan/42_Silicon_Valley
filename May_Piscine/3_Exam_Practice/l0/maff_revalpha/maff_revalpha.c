/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:51:26 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/07 16:52:24 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char to_print;

	to_print = 'z';
	while (to_print >= 'a')
	{
		if (to_print % 2)
			ft_print_char(to_print - 32);
		else
			ft_print_char(to_print);
		to_print--;
	}
	write(1, "\n", 1);
	return (0);
}
