#include "libft.h"

int	ft_strlen(char *str);

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*to_ret;

	i = 0;
	len = ft_strlen(s);
	to_ret = (char *)malloc(sizeof(*to_ret) * len);
	if (to_ret != NULL)
	{
		while (i < len)
		{
			to_ret[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (to_ret);
}
