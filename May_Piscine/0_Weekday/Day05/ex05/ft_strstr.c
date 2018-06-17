/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:04:05 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/21 20:48:20 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		start_index;
	int		str1_index;
	int		str2_index;
	int		done;

	if (!to_find[0])
		return (str);
	start_index = -1;
	str1_index = 0;
	str2_index = 0;
	done = 0;
	while (str[str1_index++] != '\0' && !done)
	{
		if (str[str1_index - 1] == to_find[str2_index])
		{
			if (start_index == -1)
				start_index = str1_index - 1;
			str2_index++;
		}
		if (to_find[str2_index] == '\0')
			done = 1;
	}
	if (!done)
		return (0);
	return (str + start_index);
}
