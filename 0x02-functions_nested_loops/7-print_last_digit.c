#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit needs to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;

/* Get the last digit by taking the absolute value of n modulo 10 */
last_digit = _abs(n) % 10;

/* Print the last digit using _putchar */
_putchar('0' + last_digit);

/* Return the value of the last digit */
return (last_digit);
}
