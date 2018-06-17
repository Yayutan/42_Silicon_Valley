/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 20:45:16 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/17 20:45:18 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_sep(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char first_d;
	char second_d;
	char third_d;

	first_d = '0';
	while (first_d <= '7')
	{
		second_d = first_d + 1;
		while (second_d <= '8')
		{
			third_d = second_d + 1;
			while (third_d <= '9')
			{
				ft_putchar(first_d);
				ft_putchar(second_d);
				ft_putchar(third_d);
				if (first_d == '7' && second_d == '8' && third_d == '9')
					return ;
				print_sep();
				third_d++;
			}
			second_d++;
		}
		first_d++;
	}
}
