/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 22:32:31 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/20 22:37:46 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_printrim(int x, int y, int x_pos, int y_pos)
{
	if (x_pos == 1 && y_pos == 1)
		ft_putchar('/');
	else if ((x_pos == 1 && y_pos == y) || (x_pos == x && y_pos == 1))
		ft_putchar('\\');
	else if (x_pos == x && y_pos == y)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	x_pos;
	int	y_pos;

	y_pos = 0;
	while (++y_pos <= y)
	{
		x_pos = 0;
		while (++x_pos <= x)
		{
			if ((x_pos == 1 || x_pos == x) || (y_pos == 1 || y_pos == y))
			{
				ft_printrim(x, y, x_pos, y_pos);
			}
			else
				ft_putchar(' ');
			if (x_pos == x)
				ft_putchar('\n');
		}
	}
}
