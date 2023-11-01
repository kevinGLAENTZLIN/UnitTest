##
## EPITECH PROJECT, 2022
## my_printf -tests : Makefile
## File description:
## Makefile to call all my unit-test and build it
##

SRC_TEST	=	main_test.c

SRC_C	=	../main.c \
			../lib/my/my_putstr.c


OBJ     =       $(SRC_TEST:.c=.o)

NAME    =       unit_test

FLAG    =       -L ../ -I ../include

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(SRC_C) $(SRC_TEST) $(FLAG) --coverage -lcriterion
	cp $(NAME) ../

clean:
	rm -f $(OBJ)
	rm -f unit_test-*

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:     fclean all

auteur:
	echo $(USER) > auteur
