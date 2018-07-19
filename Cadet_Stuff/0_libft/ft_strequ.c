#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	if (!(*s1) && !(*s2))
		return (1);
	else if ((*s1) != (*s2))
		return (0);
	else
		return (ft_strequ(s1 + 1, s2 + 1));
}
