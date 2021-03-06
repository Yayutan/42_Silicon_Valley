/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 02:18:54 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 02:27:19 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	char	i;
	int		ck;

	i = str[0];
	if (!str[0])
		return (1);
	ck = (i >= '0' && i <= '9');
	return (ck && ft_str_is_numeric(str + 1));
}
