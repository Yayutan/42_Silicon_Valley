#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int get_next_line(const int fd, char **line);

int main()
{
	char *res;
	int fd = open("test1", O_RDONLY);
	if (fd > 0)
	{
		get_next_line(fd, &res);
		printf("%s\n", res);
	}
	else
		printf("Error opening file\n");
	int fd2 = open("test2", O_RDONLY);
	if (fd > 0)
	{
		get_next_line(fd2, &res);
		printf("%s\n", res);
	}
	else
		printf("Error opening file\n");
	if (fd > 0)
	{
		get_next_line(fd, &res);
		printf("%s\n", res);
	}
	else
		printf("Error opening file\n");
}

