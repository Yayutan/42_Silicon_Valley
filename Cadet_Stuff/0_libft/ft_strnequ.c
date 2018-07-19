#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!(*s1) || !(*s2) || n == 0)
		return (1);
	else if ((*s1) != (*s2))
		return (0);
	else
		return (ft_strnequ(s1 + 1, s2 + 1, n - 1));
}
