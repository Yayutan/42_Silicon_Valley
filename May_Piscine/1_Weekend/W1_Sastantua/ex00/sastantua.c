/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 22:01:31 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/20 22:10:30 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		find_initial_size(int param)
{
	int prev_result;
	int in_group_induc;
	int final_tweak;

	if (param == 1)
		return (1);
	prev_result = find_initial_size(param - 1);
	in_group_induc = 2 * (param);
	final_tweak = 6 + 2 * ((param - 2) / 2);
	return (prev_result + in_group_induc + final_tweak);
}

void	print_sym(int num, char sym)
{
	int		i;

	i = 0;
	while (i < num)
	{
		ft_putchar(sym);
		i++;
	}
}

void	print_door(int ly, int row_index, int num_star, int door_side)
{
	num_star = (num_star - door_side) / 2;
	print_sym(num_star, '*');
	if ((ly + 2 - row_index) == ((door_side + 1) / 2) && ly >= 5)
	{
		print_sym(door_side - 2, '|');
		print_sym(1, '$');
		print_sym(1, '|');
	}
	else
		print_sym(door_side, '|');
	print_sym(num_star, '*');
}

void	print_layer(int ly, int max, int tot_width)
{
	int start_width;
	int row_index;
	int num_space;
	int num_star;
	int door_side;

	start_width = find_initial_size(ly);
	door_side = 1 + 2 * ((ly - 1) / 2);
	row_index = 0;
	while (row_index < (ly + 2))
	{
		num_star = start_width + 2 * row_index;
		num_space = (tot_width - num_star) / 2;
		print_sym(num_space, ' ');
		ft_putchar('/');
		if (ly != max || (ly == max && row_index < ((ly + 2) - door_side)))
			print_sym(num_star, '*');
		else
			print_door(ly, row_index, num_star, door_side);
		ft_putchar('\\');
		ft_putchar('\n');
		row_index++;
	}
}

void	sastantua(int param)
{
	int t_width;
	int curr;

	if (param > 0)
	{
		t_width = find_initial_size(param) + 2 * (param + 1);
		curr = 1;
		while (curr <= param)
		{
			print_layer(curr, param, t_width);
			curr++;
		}
	}
}
