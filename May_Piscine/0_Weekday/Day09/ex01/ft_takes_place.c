/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:46:12 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/24 19:39:03 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	char	*pm1;
	char	*pm2;
	int		hour1;
	int		hour2;

	pm1 = "A.M.";
	pm2 = "A.M.";
	if (hour >= 12 && hour < 24)
		pm1 = "P.M.";
	if (hour + 1 >= 12 && hour + 1 < 24)
		pm2 = "P.M.";
	hour1 = hour % 12;
	hour2 = (hour + 1) % 12;
	if (hour1 == 0)
		hour1 = 12;
	if (hour2 == 0)
		hour2 = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND %d.00 %s\n", hour1, pm1, hour2, pm2);
}
