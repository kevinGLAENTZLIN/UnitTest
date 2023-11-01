#include "include/test.h"

void test_str(char *const str)
{
    my_putstr(str);
}

int main(int argc, char **argv, char **env)
{
    test_str("coucou\n");
    return 0;
}