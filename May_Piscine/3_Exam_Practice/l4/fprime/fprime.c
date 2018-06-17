/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 19:30:06 by mchuang           #+#    #+#             */
/*   Updated: 2018/06/07 21:25:28 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_prime(int nb)
{
	int i;

	i = nb - 1;
	while (i > 1)
	{
		if(nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int		next_prime(int nb)
{
	nb++;
	if (is_prime(nb))
		return (nb);
	else
		return (next_prime(nb));
}

int		main(int argc, char **argv)
{
	int nb;
	int i;

	if (argc > 1)
	{
		nb = atoi(argv[1]);
		if (nb == 1)
			printf("1");
		else
		{
			if (is_prime(nb))
			{
				printf("%i\n", nb);
				return (1);
			}
			i = 2;
			while (i <= nb)
			{
				if (nb % i == 0)
				{
					nb /= i;
					if (nb != 1)
						printf("%d*", i);
					else
						printf("%d", i);
				}
				else
					i = next_prime(i);
			}
		}
	}
	printf("\n");
	return (0);
}
