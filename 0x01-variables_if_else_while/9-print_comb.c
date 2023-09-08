#include <stdio.h>
/**
 * main - Entry point
 * Convert the digit to its character representation
 * Print a comma
 * Print a space
 * Print a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar('\n');
return (0);
}
