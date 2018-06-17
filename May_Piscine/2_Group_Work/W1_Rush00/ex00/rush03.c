/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 14:26:04 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/20 21:29:38 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_top_bottom(int num_col)
{
	int		b;

	ft_putchar('A');
	b = 0;
	while (b < (num_col - 2))
	{
		ft_putchar('B');
		b++;
	}
	if (num_col > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	print_middle(int num_col)
{
	int		space;

	ft_putchar('B');
	space = 0;
	while (space < (num_col - 2))
	{
		ft_putchar(' ');
		space++;
	}
	if (num_col > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		curr_row;

	if (x > 0 && y > 0)
	{
		print_top_bottom(x);
		curr_row = 0;
		while (curr_row < (y - 2))
		{
			print_middle(x);
			curr_row++;
		}
		if (y > 1)
			print_top_bottom(x);
	}
}
