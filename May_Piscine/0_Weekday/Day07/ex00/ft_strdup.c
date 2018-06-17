/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 23:29:29 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/24 10:16:11 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	if (!str[0])
		return (0);
	return (1 + ft_strlen(str + 1));
}

char	*ft_strdup(char *src)
{
	char	*to_ret;
	int		len;
	int		index;

	len = ft_strlen(src);
	to_ret = (char*)malloc((len + 1) * sizeof(char));
	index = 0;
	while (index <= len)
	{
		*(to_ret + index) = *(src + index);
		index++;
	}
	return (to_ret);
}
