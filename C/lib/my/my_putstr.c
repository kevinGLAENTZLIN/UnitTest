#include "../../include/lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *const str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}