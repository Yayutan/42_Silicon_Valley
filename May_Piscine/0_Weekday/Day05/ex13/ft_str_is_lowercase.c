/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 02:28:56 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 02:29:35 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	char	i;
	int		ck;

	i = str[0];
	if (!str[0])
		return (1);
	ck = (i >= 'a' && i <= 'z');
	return (ck && ft_str_is_lowercase(str + 1));
}
