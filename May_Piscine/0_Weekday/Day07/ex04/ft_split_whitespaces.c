/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 05:02:53 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/24 18:33:08 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}

int		ft_strlen(char *str)
{
	if (!str[0])
		return (0);
	return (1 + ft_strlen(str + 1));
}

void	ft_strcpy(char **dest, char *src, int start, int end)
{
	int		index;

	index = 0;
	while (index < (end - start))
	{
		*(*dest + index) = src[start + index];
		index++;
	}
	*(*dest + index) = '\0';
}

void	setup(char *str, int *num_words, int **str_i, int **end_i)
{
	int		in_word;
	int		index;

	in_word = 0;
	index = 0;
	*num_words = 0;
	while (str[index])
	{
		if (!in_word && !is_space(str[index]))
		{
			in_word = 1;
			*(*str_i + *num_words) = index;
			*(*end_i + *num_words) = ft_strlen(str);
			*num_words = *(num_words) + 1;
		}
		else if (in_word && is_space(str[index]))
		{
			in_word = 0;
			*(*end_i + (*num_words - 1)) = index;
		}
		index++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		num_words;
	int		*s_i;
	int		*e_i;
	char	**rt;
	int		index;

	s_i = (int*)malloc(sizeof(int) * (ft_strlen(str) / 2 + 1));
	e_i = (int*)malloc(sizeof(int) * (ft_strlen(str) / 2 + 1));
	setup(str, &num_words, &s_i, &e_i);
	rt = (char**)malloc(sizeof(char*) * (num_words + 1));
	index = 0;
	while (index < num_words)
	{
		rt[index] = (char*)malloc(sizeof(char) * (e_i[index] - s_i[index] + 1));
		ft_strcpy(&rt[index], str, s_i[index], e_i[index]);
		index++;
	}
	rt[index] = 0;
	return (rt);
}
