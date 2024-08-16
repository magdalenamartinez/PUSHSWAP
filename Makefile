##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## funcion which
##

NAME	=	push_swap

LIB	=	-L lib/my/ -lmy

INCLUDE	=	-I ./include/

SRC	= 	src/main.c	\
		src/add_element.c	\
		src/bigsmall.c	\
		src/bucles.c	\
		src/casos_sa.c	\
		src/create_array.c	\
		src/move.c	\
		src/my_put_nbr_ant.c	\
		src/ordenamientos.c	\
		src/rotate.c	\
		src/swap.c	\
		src/switch.c	\
		src/takefirstint.c	\

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): 	$(OBJ)
		make -C ./lib/my
		gcc -g $(OBJ) -o $(NAME) $(INCLUDE) $(LIB)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f libmy.a
	rm -f lib/my/libmy.a
	rm -f ./lib/my/*.o
	rm -f ./src/*.o

re: fclean all

library: fclean
	make -C lib/my/ re

exec:	re
	./$(NAME)
