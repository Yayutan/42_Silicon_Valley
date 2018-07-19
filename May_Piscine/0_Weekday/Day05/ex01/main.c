#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ft_putnbr(int nb);

int main(int argc, char **argv)
{
	int 	i;

	i = 1;
	while(i < argc)
	{
		printf("%s -> ", argv[i]);
		fflush(stdout);
		ft_putnbr(atoi(argv[i]));
		printf("\n");
		i++;
	}
	return (0);
}
