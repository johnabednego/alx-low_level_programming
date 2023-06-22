#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
_putchar('0'); /* Print the first column (0) */

for (column = 1; column <= 9; column++)
{
_putchar(','); /* Print the separator */
_putchar(' ');

product = row * column;

if (product <= 9)
_putchar(' '); /* Align single-digit numbers */

if (product > 9)
_putchar((product / 10) + '0'); /* Print tens digit */

_putchar((product % 10) + '0'); /* Print ones digit */
}

_putchar('\n'); /* Move to the next row */
}
}
