##
## EPITECH PROJECT, 2022
## makefile
## File description:
## program to build my lib and my unit-test with single files
##

unit_tests:	fclean
	make -C tests/ re

tests_run:	unit_tests
	./unit_test

clean:
	make -C tests/ clean

fclean:
	make -C tests/ fclean

re:	fclean all

auteur:
	echo $(USER) > kev
