/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 02:52:13 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/27 22:44:29 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudo.h"

void	clone_solution(char **puzzle, char ***solution)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			(*solution)[i][j] = puzzle[i][j];
			j++;
		}
		i++;
	}
}

void	print_solution(char **solution)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &solution[i][j], 1);
			if (j <= 7)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		helper(char **puzzle, char ***solution, int row, int col)
{
	if (row < 8 && col == 8)
		solve(puzzle, solution, row + 1, 0);
	else if (col < 8)
		solve(puzzle, solution, row, col + 1);
	else if (row == 8 && col == 8)
	{
		g_count++;
		clone_solution(puzzle, solution);
		return (1);
	}
	return (0);
}

void	solve(char **puzzle, char ***solution, int row, int col)
{
	char try_put;

	if (g_count > 1)
		return ;
	if (puzzle[row][col] != '.')
	{
		if (helper(puzzle, solution, row, col))
			return ;
	}
	else
	{
		try_put = '1';
		while (try_put++ <= '9')
		{
			if (is_valid(try_put - 1, row, col, puzzle))
			{
				puzzle[row][col] = try_put - 1;
				if (helper(puzzle, solution, row, col))
					return ;
			}
		}
		puzzle[row][col] = '.';
	}
	return ;
}

int		main(int argc, char **argv)
{
	char	**solution;
	int		i;

	g_count = 0;
	if (!(puzzle_basic_check(argc - 1, argv)))
		write(1, "Error\n", 6);
	else
	{
		solution = (char**)malloc(sizeof(char*) * 9);
		i = 0;
		while (i < 9)
		{
			solution[i] = (char*)malloc(sizeof(char) * 9);
			i++;
		}
		solve(&(argv[1]), &solution, 0, 0);
		if (g_count == 1)
			print_solution(solution);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
