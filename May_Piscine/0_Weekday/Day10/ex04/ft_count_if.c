/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:13:12 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/28 17:16:13 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			result++;
		i++;
	}
	return (result);
}
