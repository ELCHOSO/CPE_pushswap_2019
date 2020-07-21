##
## EPITECH PROJECT, 2019
## pushswap
## File description:
## makefile
##

SRC	=	algo_tri.c	\
		linked_list.c	\
		operations.c	\
		main.c         	\
		my_getnbr.c	\
		print.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
