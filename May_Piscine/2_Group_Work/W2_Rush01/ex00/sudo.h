/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 17:43:42 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/27 18:51:37 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDO_H
# define SUDO_H
# include <stdlib.h>
# include <unistd.h>

void	solve(char **puzzle, char ***solution, int row, int col);
int		puzzle_basic_check(int num_row, char **puzzle);
int		check_row(char num_to_put, int row, int col, char **puzzle);
int		check_col(char num_to_put, int row, int col, char **puzzle);
int		check_grid(char num_to_put, int row, int col, char **puzzle);
int		is_valid(char num_to_put, int row, int col, char **puzzle);
void	move_down_one(char **puzzle, char ***solution, int row, int col);
void	clone_solution(char **puzzle, char ***solution);
void	print_solution(char **solution);
int		g_count;

#endif
