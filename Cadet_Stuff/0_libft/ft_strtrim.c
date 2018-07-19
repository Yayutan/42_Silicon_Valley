#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*to_ret;
	int		start;
	int		end;
	int		index;

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return ((char *)ft_memalloc(sizeof(char)));
	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	to_ret = ft_strnew(end - start + 1);
	if (to_ret == NULL)
		return (NULL)
	index = 0;
	while (index <= end - start)
	{
		to_ret[index] = s[start + index];
		index++;
	}
	return (to_ret);
}
