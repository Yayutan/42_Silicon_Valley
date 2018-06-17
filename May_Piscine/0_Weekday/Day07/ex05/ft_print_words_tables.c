/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 07:22:28 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/24 07:33:00 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (str[0])
	{
		ft_putchar(str[0]);
		ft_putstr(str + 1);
	}
	else
		ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int		index;

	index = 0;
	while (tab[index])
	{
		ft_putstr(tab[index]);
		index++;
	}
}
