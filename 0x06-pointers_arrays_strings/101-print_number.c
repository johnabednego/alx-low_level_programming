#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
unsigned int num;

if (n < 0)
{
printf('-');
num = -n;
}
else
{
num = n;
}

if (num / 10)
{
print_number(num / 10);
}

printf((num % 10) + '0');
}
