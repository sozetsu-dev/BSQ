/*
** EPITECH PROJECT, 2017
** bsq
** File description:
** my_utils2.c
*/

#include "../include/bsq.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_putstr(char *str)
{
	int	i = 0;

	while (str[i]) {
		my_putchar(str[i]);
		i += 1;
	}
	return (0);
}

int	print_map(char *map)
{
	int	k = 0;

	while (map[k] != '\n')
		k += 1;
	k += 1;
	my_putstr(&map[k]);
	return (0);
}
