/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:00:37 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 12:53:07 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*trim(char *str)
{
	int		curr;

	curr = 0;
	while (str[curr] != '\0')
	{
		if (str[curr] >= '0' && str[curr] <= '9')
			return (str + curr);
		if (str[curr] == '-' || str[curr] == '+')
			return (str + curr);
		if (str[curr] != '\t' && str[curr] != '\n' && str[curr] != '\v')
		{
			if (str[curr] != '\f' && str[curr] != '\r' && str[curr] != ' ')
				return ("");
		}
		curr++;
	}
	return ("");
}

int		ft_atoi(char *org)
{
	int		curr;
	int		result;
	int		neg;
	char	*str;

	curr = 0;
	result = 0;
	neg = 1;
	str = trim(org);
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
