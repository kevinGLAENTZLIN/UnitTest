#include "include/test.h"

/*Fonction pour tester la return value d'une fonction*/
int test_value(char character)
{
    if (character == 'C')
        return 42;
    return 0;
}

/*Fonction pour tester si la string est égal*/
void test_str(char *const str)
{
    my_putstr(str);
}

/*Test de la value dans une structure*/
void test_str_in_struct(test_t *test)
{
    test->str = strdup("test\n");
    my_putstr(test->str);
}