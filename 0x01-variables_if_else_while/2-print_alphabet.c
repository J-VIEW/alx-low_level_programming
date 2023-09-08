#include <stdio.h>
/**
*a program that prints the alphabet in lowercase
*prints a new line after
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
