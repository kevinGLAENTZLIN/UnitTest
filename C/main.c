#include "include/test.h"

int test_value(char character)
{
    if (character == 'C')
        return 42;
    return 0;
}

void test_str(char *const str)
{
    my_putstr(str);
}
