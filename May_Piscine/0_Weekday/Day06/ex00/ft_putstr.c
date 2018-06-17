/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:38:49 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/18 16:43:58 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	curr;
	int		index;

	index = 0;
	curr = str[index];
	while (curr != '\0')
	{
		ft_putchar(curr);
		index++;
		curr = str[index];
	}
}
