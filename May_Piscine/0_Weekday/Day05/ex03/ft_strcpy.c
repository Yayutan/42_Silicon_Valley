/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 16:51:19 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/21 17:27:18 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		index;
	int		done;

	index = 0;
	done = 0;
	while (!done)
	{
		*(dest + index) = *(src + index);
		if (src[index] == '\0')
			done = 1;
		index++;
	}
	return (dest);
}
