/*
** EPITECH PROJECT, 2017
** bsq
** File description:
** main.c
*/

#include "include/bsq.h"

int		main(int ac, char **av)
{
	t_perf	perf;
	char	*map;

	if (ac != 2)
		return (84);
	map = openf(av[1]);
	perf = search_square(map, size_l(map));
	draw_sq(map, perf.pos, perf.size);
	print_map(map);
	return (0);
}
