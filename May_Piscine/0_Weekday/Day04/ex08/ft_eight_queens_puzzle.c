/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 21:27:25 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/19 23:40:26 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_count;
char	g_curr_str[8];

void	take(int col, int row)
{
	g_curr_str[col] = 48 + row;
}

int		check_avail_take(int col, int row)
{
	int		i_col;

	i_col = 0;
	while (i_col < col)
	{
		if ((g_curr_str[i_col] - 48) == row)
			return (0);
		if ((g_curr_str[i_col] + i_col - 48) == (col + row))
			return (0);
		i_col++;
	}
	return (1);
}

void	checking_col(int col)
{
	int		curr_row;
	int		avail;

	curr_row = 0;
	avail = 0;
	while (curr_row < 8)
	{
		avail = check_avail(col, curr_row);
		if (avail)
		{
			take(col, curr_row);
			if (col == 7)
			{
				g_count++;
				g_curr_str = "99999999";
				break ;
			}
			checking_col(col++);
		}
		curr_row++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	g_curr_str = "99999999";
	g_count = 0;
	checking_col(1);
	return (g_count);
}
