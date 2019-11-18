##
## EPITECH PROJECT, 2017
## bsq
## File description:
## Makefile
##

CC	=	gcc -g3 -W -Wall -Wextra -Werror

RM	=	rm -rf

SRC	=	./src/my_utils.c	\
		./src/my_utils2.c	\
		main.c

CFLAGS	+=	-I./include/

NAME	=	bsq

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)
		find . -name "*~" -delete -o -name "#*#" -delete

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
