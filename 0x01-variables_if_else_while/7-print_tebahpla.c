#include <stdio.h>
/**
 * main - Entry point
 * print alphabet in reverse
 * 
 * Print a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
