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
