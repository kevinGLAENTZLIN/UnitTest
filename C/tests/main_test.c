/*
** EPITECH PROJECT, 2022
** my_printf -tests : different proto
** File description:
** program to test different situation with my_printf and the real printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/test.h"

void test_str(char *const str);
int test_value(char character);
void test_str_in_struct(test_t *test);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (test_str, equal_str, .init = redirect_all_std)
{
    test_str("coucou\n");
    cr_assert_stdout_eq_str("coucou\n");
}


Test (test_value, return_value_equal, .init = redirect_all_std)
{
    cr_assert_eq(test_value('C'), 42);
}

Test (test_str_in_struct, test_structure, .init = redirect_all_std)
{
    test_t *test = malloc(sizeof(test_t));

    test_str_in_struct(test);
    free(test);
    cr_assert_stdout_eq_str("test\n");
}
