/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 01:11:15 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 01:55:31 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		valid_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		in_word;
	int		index;

	in_word = 0;
	index = 0;
	while (str[index++])
	{
		if (valid_char(str[index - 1]))
		{
			if (!in_word)
			{
				in_word = 1;
				if (str[index - 1] >= 'a' && str[index - 1] <= 'z')
					str[index - 1] -= 32;
			}
			else
			{
				if (str[index - 1] >= 'A' && str[index - 1] <= 'Z')
					str[index - 1] += 32;
			}
		}
		else
			in_word = 0;
	}
	return (str);
}
