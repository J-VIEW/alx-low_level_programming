#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
int length = 0;
int half;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Calculate the starting index for the second half */
half = (length - 1) / 2 + 1;

/* Print the second half of the string */
while (str[half] != '\0')
{
_putchar(str[half]);
half++;
}

_putchar('\n');
}
