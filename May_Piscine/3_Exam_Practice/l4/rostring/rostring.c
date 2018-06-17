/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 21:26:15 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/07 22:22:21 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


void	print_words(char *str)
{
	int	i;
	int	prev_space;

	if (!*str)
		return ;
	i = 0;
	prev_space = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			write(1, str + i, 1);
			prev_space = 0;
		}
		else
		{
			if (!prev_space)
			{
				write(1, str + i, 1);
				prev_space = 1;
			}
		}
		i++;
	}
	if (!prev_space)
		write(1, " ", 1);
}

int		main(int argc, char **argv)
{
	int s_index;
	int e_index;

	if (argc > 1)
	{
		s_index = 0;
		while (argv[1][s_index] == ' ')
			s_index++;
		e_index = s_index;
		while (argv[1][e_index])
		{
			if (argv[1][e_index] == ' ')
				break;
			e_index++;
		}
		print_words(argv[1] + e_index);
		write(1, argv[1]+s_index, e_index - s_index);
	}
	write(1, "\n", 1);
	return (0);
}
