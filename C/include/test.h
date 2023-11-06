#ifndef TEST_H_
    #define TEST_H_
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include "lib.h"

void test_str(char *const str);
int test_value(char character);

typedef struct test_s {
    char *str;
} test_t;

void test_str_in_struct(test_t *test);

#endif