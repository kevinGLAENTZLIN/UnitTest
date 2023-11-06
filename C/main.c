#include "include/test.h"

int main(void)
{
    test_t *test = malloc(sizeof(test_t));

    test_value('C');
    test_str("coucou\n");
    test_str_in_struct(test);
    return 0;
}