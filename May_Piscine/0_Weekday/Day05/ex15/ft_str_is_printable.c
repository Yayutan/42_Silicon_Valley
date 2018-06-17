/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 02:33:29 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 02:50:16 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	char	i;
	int		ck;

	i = str[0];
	if (i == 127)
		return (0);
	if (!i)
		return (1);
	ck = (i >= 32);
	return (ck && ft_str_is_printable(str + 1));
}
