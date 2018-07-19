#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"

#define BUFF_SIZE  1
#define FD_SIZE  10000

int get_next_line(const int fd, char **line);

#endif
