/*
** EPITECH PROJECT, 2017
** bsq
** File description:
** bsq.h
*/

#ifndef BSQ_H_
# define BSQ_H_

# ifndef _UNUSED
#  define unused __attribute__((unused))
# endif /* !_UNUSED*/


#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

typedef struct		s_perf
{
  int			size;
  int			pos;
}			t_perf;

/*
**	my_utils.c
*/
char			*openf(char *file);
int			size_l(char *map);
int			draw_sq(char *map, int pos, int size);
t_perf			search_square(char *map, int size_line);
int			square_is(char *map, int pos, int sqsize);

/*
**	my_utils2.c
*/
void			my_putchar(char c);
int			my_putstr(char *str);
int			print_map(char *map);

#endif /* BSQ_H_ */
