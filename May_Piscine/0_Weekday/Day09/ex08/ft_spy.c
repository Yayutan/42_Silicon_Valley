/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:16:08 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/25 12:27:29 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	all_caps(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int		ft_strcmp(char *s1, char *s2)
{
	char	c1;
	char	c2;

	if (!s1[0] && !s2[0])
		return (0);
	c1 = all_caps(s1[0]);
	c2 = all_caps(s2[0]);
	if (c1 != c2)
		return (c1 - c2);
	else
		return (ft_strcmp(s1 + 1, s2 + 1));
}

int		main(int argc, char **argv)
{
	int		index;

	index = 1;
	while (index < argc)
	{
		if (!ft_strcmp(argv[index], "president") ||
				!ft_strcmp(argv[index], "attack") ||
				!ft_strcmp(argv[index], "Bauer"))
		{
			write(1, "ALERT!!!\n", 10);
			return (-1);
		}
		index++;
	}
	return (0);
}
