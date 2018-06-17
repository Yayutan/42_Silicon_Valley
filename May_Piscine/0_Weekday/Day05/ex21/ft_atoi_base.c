/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 23:19:09 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/22 23:42:54 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int		str_index_of(char c, char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

char	*trim(char *str, char *base)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (str_index_of(str[index], base) >= 0)
			return (str + index);
		if (str[index] == '-' || str[index] == '+')
			return (str + index);
		if (str[index] != '\t' && str[index] != '\n' && str[index] != '\v')
		{
			if (str[index] != '\f' && str[index] != '\r' && str[index] != ' ')
				return ("");
		}
		index++;
	}
	return ("");
}

int		ft_atoi_base(char *str, char *base)
{
	int		base_n;
	char	*trimmed;
	int		curr;
	int		neg;
	int		result;

	base_n = check_base(base);
	trimmed = trim(str, base);
	curr = 0;
	neg = 1;
	result = 0;
	if (trimmed[0] == '-' || trimmed[0] == '+')
		curr++;
	if (trimmed[0] == '-')
		neg = -1;
	while (trimmed[curr] != '\0')
	{
		if (str_index_of(trimmed[curr], base) >= 0)
			result = result * base_n + str_index_of(trimmed[curr], base);
		else
			return (result * neg);
		curr++;
	}
	return (result * neg);
}
