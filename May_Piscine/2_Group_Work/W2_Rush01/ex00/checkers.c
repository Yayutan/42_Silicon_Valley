/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 17:46:06 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/27 18:21:45 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_col_row(char num_to_put, int row, int col, char **puzzle)
{
	int curr_col;
	int curr_row;

	curr_col = 0;
	while (curr_col < 9)
	{
		if (curr_col != col && puzzle[row][curr_col] == num_to_put)
			return (0);
		curr_col++;
	}
	curr_row = 0;
	while (curr_row < 9)
	{
		if (curr_row != row && puzzle[curr_row][col] == num_to_put)
			return (0);
		curr_row++;
	}
	return (1);
}

int		check_grid(char num_to_put, int row, int col, char **puzzle)
{
	int curr_row;
	int curr_col;

	curr_row = (row / 3) * 3 + 0;
	while (curr_row <= ((row / 3) * 3 + 2))
	{
		curr_col = (col / 3) * 3 + 0;
		while (curr_col <= (col / 3) * 3 + 2)
		{
			if (curr_row != row && curr_col != col &&
					puzzle[curr_row][curr_col] == num_to_put)
				return (0);
			curr_col++;
		}
		curr_row++;
	}
	return (1);
}

int		is_valid(char num_to_put, int row, int col, char **puzzle)
{
	return (check_col_row(num_to_put, row, col, puzzle) &&
		check_grid(num_to_put, row, col, puzzle));
}

int		check_problem(char **puzzle)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (puzzle[row][col] != '.' &&
				!(is_valid(puzzle[row][col], row, col, puzzle)))
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int		puzzle_basic_check(int num_row, char **puzzle)
{
	int i;
	int j;
	int row_len;

	if (num_row != 9)
		return (0);
	i = 1;
	while (i <= num_row)
	{
		j = 0;
		row_len = 0;
		while (puzzle[i][j])
		{
			if (!(puzzle[i][j] >= '0' && puzzle[i][j] <= '9') &&
				puzzle[i][j] != '.')
				return (0);
			row_len++;
			j++;
		}
		if (row_len != 9)
			return (0);
		i++;
	}
	return (1 && check_problem(&(puzzle[1])));
}
