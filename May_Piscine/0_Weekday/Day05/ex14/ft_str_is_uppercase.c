/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 02:30:42 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 02:31:26 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	char	i;
	int		ck;

	i = str[0];
	if (!str[0])
		return (1);
	ck = (i >= 'A' && i <= 'Z');
	return (ck && ft_str_is_uppercase(str + 1));
}
