/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:15:14 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/21 17:33:28 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				done;
	unsigned int	curr;

	done = 0;
	curr = 0;
	while (curr < n)
	{
		if (src[curr] == '\0')
			done = 1;
		if (done)
			*(dest + curr) = '\0';
		else
			*(dest + curr) = *(src + curr);
		curr++;
	}
	return (dest);
}
