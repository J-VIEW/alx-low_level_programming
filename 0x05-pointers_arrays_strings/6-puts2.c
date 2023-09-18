#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
int i = 0;

int length = 0;
while (str[length] != '\0')
{
length++;
}

while (i < length)
{
_putchar(str[i]);
i += 2;
}

_putchar('\n');
}
