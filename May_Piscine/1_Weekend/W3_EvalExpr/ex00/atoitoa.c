/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoitoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:02:38 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/03 20:07:43 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoitoa.h"

int		get_len(int nb)
{
	int len;

	len = 1;
	if (nb <= 0)
	{
		nb = -1 * nb;
		len++;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*a_itoa(int value)
{
	int		len;
	char	*final_str;
	int		i;
	int		neg;

	if (value == -2147483648)
		return ("-2147483648");
	neg = 1;
	if (value < 0)
		neg = -1;
	len = get_len(value);
	final_str = (char*)malloc(sizeof(*final_str) * len);
	if (neg == -1)
		final_str[0] = '-';
	final_str[len - 1] = '\0';
	i = len - 2;
	while (i >= 0)
	{
		if (neg == -1 && (i == 0))
			break ;
		final_str[i] = '0' + neg * (value % 10);
		value /= 10;
		i--;
	}
	return (final_str);
}

int		a_atoi(char *str)
{
	int		curr;
	int		result;
	int		neg;

	curr = 0;
	result = 0;
	neg = 1;
	if (str[0] == '-')
	{
		neg = -1;
		curr++;
	}
	else if (str[0] == '+')
		curr++;
	while (str[curr] != '\0')
	{
		if (str[curr] >= '0' && str[curr] <= '9')
			result = result * 10 + (str[curr] - '0');
		else
			return (result * neg);
		curr++;
	}
	return (result * neg);
}
