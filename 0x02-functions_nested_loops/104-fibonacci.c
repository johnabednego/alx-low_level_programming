#include "main.h"

/**
 * fibo - Entry point
 *
 * Return: Always 0
 */
int fibo(void)
{
int i;
unsigned long int fib1 = 1, fib2 = 2, fib_next;

_putchar('0' + fib1);
_putchar(',');
_putchar(' ');

_putchar('0' + fib2);
_putchar(',');
_putchar(' ');

for (i = 0; i < 96; i++)
{
fib_next = fib1 + fib2;
_putchar('0' + (fib_next / 1000000000));
_putchar('0' + ((fib_next / 100000000) % 10));
_putchar('0' + ((fib_next / 10000000) % 10));
_putchar('0' + ((fib_next / 1000000) % 10));
_putchar('0' + ((fib_next / 100000) % 10));
_putchar('0' + ((fib_next / 10000) % 10));
_putchar('0' + ((fib_next / 1000) % 10));
_putchar('0' + ((fib_next / 100) % 10));
_putchar('0' + ((fib_next / 10) % 10));
_putchar('0' + (fib_next % 10));

if (i != 95)
{
_putchar(',');
_putchar(' ');
}

fib1 = fib2;
fib2 = fib_next;
}

_putchar('\n');

return (0);
}
