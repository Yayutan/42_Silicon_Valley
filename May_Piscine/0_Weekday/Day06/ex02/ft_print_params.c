/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 00:48:15 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/23 00:55:38 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		index1;
	int		index2;

	index1 = 1;
	index2 = 0;
	while (index1 < argc)
	{
		index2 = 0;
		while (argv[index1][index2])
		{
			ft_putchar(argv[index1][index2]);
			index2++;
		}
		ft_putchar('\n');
		index1++;
	}
	return (0);
}
