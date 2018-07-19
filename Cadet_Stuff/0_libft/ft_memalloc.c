#include "libft.h"

void * ft_memalloc(size_t size)
{
	char		*to_ret;
	size_t		i;

	to_ret = (char*)malloc(size);
	if (to_ret == NULL)
		return (NULL);
	else
	{
		i = 0;
		while(i < size)
		{
			*(to_ret + i) = 0;
			i++;
		}
	}
	return (to_ret);
}
