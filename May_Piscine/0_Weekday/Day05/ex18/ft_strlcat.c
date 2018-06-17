/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:57:41 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 13:13:45 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int					index1;
	int					index2;
	unsigned int		to_ret;

	to_ret = ft_strlen(dest) + ft_strlen(src);
	if (ft_strlen(dest) > size)
		to_ret = size + ft_strlen(src);
	index1 = ft_strlen(dest);
	index2 = 0;
	while (src[index2] && (unsigned int)index1 + 1 < size)
		dest[index1++] = src[index2++];
	dest[index1] = '\0';
	return (to_ret);
}
