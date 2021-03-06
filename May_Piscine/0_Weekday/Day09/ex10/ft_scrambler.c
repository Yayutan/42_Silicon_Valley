/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:16:35 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/25 15:21:28 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int i_a;
	int i_b;
	int i_c;
	int i_d;

	i_a = ***a;
	i_b = *b;
	i_c = *******c;
	i_d = ****d;
	***a = in_b;
	*b = in_d;
	*******c = in_a;
	****d = in_c;
}
