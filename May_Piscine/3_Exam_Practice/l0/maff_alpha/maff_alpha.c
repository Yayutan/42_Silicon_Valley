/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:38:25 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/07 16:48:19 by mchuang          ###   ########.fr       */
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

	to_print = 'a';
	while (to_print <= 'z')
	{
		if (!(to_print % 2))
			ft_print_char(to_print - 32);
		else
			ft_print_char(to_print);
		to_print++;
	}
	write(1, "\n", 1);
	return (0);
}
