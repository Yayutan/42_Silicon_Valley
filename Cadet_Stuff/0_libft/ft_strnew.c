#include "libft.h"

void * ft_memalloc(size_t size);

char * ft_strnew(size_t size)
{
	char *to_ret;

	to_ret = (char *)ft_memalloc(size + 1);
	if (to_ret == NULL)
		return (NULL);
	return (to_ret);
}
