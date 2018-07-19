#include "libft.h"

int		ft_strlen(char *str);

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		tot_len;	
	int		i;
	char	*to_ret;

	tot_len = ft_strlen(s);
	if ((int)start + (int)len - 1 > tot_len - 1)
		return (NULL);
	to_ret = (char *)malloc(len + 1);
	if (to_ret == NULL)
		return (NULL);
	i = 0;	
	while (i < len)
	{
		to_ret[i] = s[start + i];	
		i++;
	}
	to_ret[len] = '\0';
	return (to_ret);
}
