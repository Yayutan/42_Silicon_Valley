/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:14:35 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/23 12:18:16 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		index;

	while (argc > 1)
	{
		index = 0;
		while (argv[argc - 1][index])
		{
			ft_putchar(argv[argc - 1][index]);
			index++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
