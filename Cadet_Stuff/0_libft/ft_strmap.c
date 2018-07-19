#include "libft.h"

int	ft_strlen(char *str);

char * ft_strmap(char const *s, char (*f)(char))
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
			to_ret[i] = (*f)(s[i]);
			i++;
		}
	}
	return (to_ret);
}
