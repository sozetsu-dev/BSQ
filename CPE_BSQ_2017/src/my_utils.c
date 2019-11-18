/*
** EPITECH PROJECT, 2017
** bsq
** File description:
** my_utils.c
*/

#include "../include/bsq.h"

char		*openf(char *file)
{
	char		*map;
	int		fd;
	int		ret;

	if ((map = malloc(sizeof(char) * 101000000)) == NULL)
		return (NULL);
	if ((fd = open(file, O_RDONLY)) == -1)
		return (NULL);
	if ((ret = read(fd, map, 101000000)) == -1)
		return (NULL);
	map[ret] = '\0';
	return (map);
}

int		size_l(char *map)
{
	int		i = 0;
	int		j;

	while (map[i] != '\n')
		i += 1;
	i += 1;
	j = i;
	while (map[i] != '\n')
		i += 1;
	i += 1;
	return (i - j);
}

int		draw_sq(char *map, int pos, int size)
{
	int		i = pos;
	int		line = 0;
	int		line_size = size_l(map);

	while (line < size) {
		i = pos;
		while (i < pos + size) {
			map[i] = 'x';
			i += 1;
		}
		pos += line_size;
		line += 1;
	}
	return (0);
}


int		square_is(char *map, int pos, int sqsize)
{
	int		line = size_l(map);
	int		cmp = 0;

	while (cmp < sqsize) {
		pos += line;
		cmp += 1;
		if (map[pos] != '.')
			return (0);
	}
	cmp = 0;
	while (cmp < sqsize) {
		pos += 1;
		cmp += 1;
		if (map[pos] != '.')
			return (0);
	}
	cmp = 0;
	while (cmp < sqsize) {
		pos = pos - line;
		cmp += 1;
		if (map[pos] != '.')
			return (0);
	}
	cmp = 0;
	return (1);
}

t_perf		search_square(char *map, unused int size_line)
{
	t_perf	perf;
	int	i = 0;
	int	sqsize;

	perf.pos = 0;
	perf.size = 0;
	while (map[i] != '\0') {
		sqsize = 0;
		if (map[i] == '.') {
			sqsize = 1;
			while (square_is(map, i, sqsize) == 1) {
				sqsize += 1;
			}
			if (perf.size < sqsize) {
				perf.pos = i;
				perf.size = sqsize;
			}
		}
		i += 1;
	}
	return (perf);
}
