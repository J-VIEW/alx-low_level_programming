#include "main.h"

/**
 * times_table - Prints the 9 times table with equal space after the comma.
 */
void times_table(void)
{
int row, column, result;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
result = row * column;

if (column == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
}

if (result < 10)
{
_putchar(' ');
}

_putchar((result / 10) + '0' );

}
_putchar('\n');
}
}
