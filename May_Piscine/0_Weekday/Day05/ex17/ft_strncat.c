/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:41:57 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 10:55:55 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		index1;
	int		index2;

	index1 = 0;
	while (dest[index1])
		index1++;
	index2 = 0;
	while (src[index2] && index2 < nb)
		dest[index1++] = src[index2++];
	dest[index1] = '\0';
	return (dest);
}
