#include "libft.h"

void	ft_putstr(char const *s)
{
	int	index;

	index = 0;
	while (s[index])
	{
		ft_putchar(s[index]);
		index++;
	}
}
