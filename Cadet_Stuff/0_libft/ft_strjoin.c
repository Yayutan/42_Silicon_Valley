#include "libft.h"

char	*ft_strjoin(char const *s1,char const *s2)
{
	int		len1;
	int		len2;
	int		index;
	char	*to_ret;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	to_ret = ft_strnew((len1 + len2) * sizeof(*to_ret));
	if (to_ret == NULL)
		return (NULL);
	index = 0;
	while(index < len1 + len2)
	{
		if (index < len1)
			to_ret[index] = s1[index];
		else
			to_ret[index] = s2[index - len1];
		index++;
	}
	return (to_ret);
}
