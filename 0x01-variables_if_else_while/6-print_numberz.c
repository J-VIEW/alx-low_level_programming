#include <stdio.h>
/**
 * main - Entry point
 * ASCII value for '0'
 * ASCII value for '9'
 * Print a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
int digit = 48;
while (digit <= 57)
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}
