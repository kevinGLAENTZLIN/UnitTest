##
## EPITECH PROJECT, 2022
## makefile
## File description:
## program to build my lib and my unit-test with single files
##

SRC	=	main.c		\
		test_function.c	\
		lib/my/my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	unitTest

all:	unitTest

$(NAME):	$(OBJ)
	gcc -o unit $(OBJ)

unit_tests:	fclean $(NAME)
	make -C tests/ re

tests_run:	unit_tests
	./unit_test

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make -C tests/ fclean

re:	fclean all

auteur:
	echo $(USER) > kev
