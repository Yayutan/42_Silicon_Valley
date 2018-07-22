#include "../minilibx/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../libft/libft.h"

void draw_line(void **param, int x1, int y1, int x2, int y2)
{
	float a;
	float b;
	int x;
	int y;

	a = (float)(y2 - y1) / (x2 - x1);
	b = (float)y1 - a * x1;
	x = x1;
	while (x != x2)
	{
		y = round(a * x + b);
		mlx_pixel_put(param[0], param[1], x, y, 0xFFFFFF);
		x += ((x2 - x1) / abs(x2 - x1));
	}
	
}

int put_point (int key, void **param)
{
	if (key == 8)
		mlx_clear_window(param[0], param[1]);
	else
		draw_line(param, 0, 40, 499, 45);
	return (1);
}


int main(int args, char **argc)
{
	void	**map;
	void	*mlx_ptr;
	void	*win_ptr;
	
	
	//get_next_line();
	map = (void**)malloc(5 * sizeof(*map));
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "test");
	map[0] = mlx_ptr;
	map[1] = win_ptr;
	mlx_key_hook(win_ptr, put_point, map);
	mlx_loop(mlx_ptr);
}
