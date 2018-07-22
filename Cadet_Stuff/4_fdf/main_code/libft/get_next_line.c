#include "get_next_line.h"

int		ft_strchr_i(char target, char *str)
{
	int		i;
	
	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == target)
			return i;
		i++;
	}
	return (-42);
}

int		setup(const int fd, char **left)
{
	char	*temp;
	char	*temp2;
	int		res;
	
	temp = ft_strnew(BUFF_SIZE);
	if (!left[fd])
		left[fd] = ft_strnew(BUFF_SIZE);
	while (ft_strchr_i('\n', left[fd]) < 0 && (res = read(fd, temp, BUFF_SIZE)) > 0)
	{
		temp[res] = '\0';
		temp2 = ft_strjoin(left[fd], temp);
		free(left[fd]);
		left[fd] = temp2;
	}
	free(temp);
	if (res < 0)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*(left[FD_SIZE]);
	char		*temp;
	int			cutoff;
	int			res;

	if (!line || fd < 0)
		return (-1);
	res = setup(fd, left);
	cutoff = ft_strchr_i('\n', left[fd]);
	if (res == -1 || cutoff == -1)
		return (-1);
	if (left[fd][0] == '\0')
		return (0);
	if (cutoff == -42)
	{
		*line = ft_strdup(left[fd]);
		ft_strdel(&(left[fd]));
		return (1);
	}
	*line = ft_strsub(left[fd], 0, cutoff);	
	temp = ft_strdup(&(left[fd][cutoff + 1]));
	free(left[fd]);
	left[fd] = temp;
	return (1);
}
