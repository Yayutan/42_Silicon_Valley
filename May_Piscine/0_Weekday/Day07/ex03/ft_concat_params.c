/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 03:48:30 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/24 10:17:26 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str)
{
	if (!str[0])
		return (0);
	return (1 + str_len(str + 1));
}

int		total_len(int argc, char **argv)
{
	int		index;
	int		len;

	index = 1;
	len = 0;
	while (index < argc)
	{
		len += str_len(argv[index]);
		index++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*to_ret;
	int		index;
	int		index2;
	int		index3;

	to_ret = (char*)malloc(sizeof(char) * (total_len(argc, argv) + argc - 1));
	index = 1;
	index3 = 0;
	while (index < argc)
	{
		index2 = 0;
		while (index2 < str_len(argv[index]))
		{
			to_ret[index3] = argv[index][index2];
			index2++;
			index3++;
		}
		to_ret[index3] = '\n';
		index3++;
		index++;
	}
	to_ret[index3 - 1] = '\0';
	return (to_ret);
}
