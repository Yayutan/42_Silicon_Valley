/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchuang <mchuang@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:21:28 by mchuang           #+#    #+#             */
/*   Updated: 2018/05/23 20:42:11 by mchuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	if (s1[0] - s2[0] != 0)
		return (s1[0] - s2[0]);
	else if (!s1[0] && !s2[0])
		return (0);
	else
		return (ft_strcmp(s1 + 1, s2 + 1));
}

char	**sort(int argc, char **argv)
{
	int		swap;
	int		index;
	char	*temp;

	swap = 1;
	while (swap)
	{
		swap = 0;
		index = 1;
		while (index < argc - 1)
		{
			if (ft_strcmp(argv[index], argv[index + 1]) > 0)
			{
				swap = 1;
				temp = argv[index];
				argv[index] = argv[index + 1];
				argv[index + 1] = temp;
			}
			index++;
		}
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int		index;

	index = 1;
	argv = sort(argc, argv);
	while (index < argc)
	{
		ft_putstr(argv[index]);
		index++;
	}
	return (0);
}
