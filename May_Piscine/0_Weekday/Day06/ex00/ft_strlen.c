/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:46:23 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/18 16:51:08 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		length;
	int		index;

	length = 0;
	index = 0;
	while (str[index] != '\0')
	{
		length++;
		index++;
	}
	return (length);
}
