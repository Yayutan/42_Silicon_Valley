#include "libft.h"

void ft_memdel(void **ap);

void ft_strdel(char **as)
{
	ft_memdel(as);
}
