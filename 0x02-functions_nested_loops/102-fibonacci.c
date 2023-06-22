#include "main.h"

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers.
 */
void print_fibonacci(void)
{
int i;
unsigned long fib1 = 1, fib2 = 2, fib3;

/* Print the first two Fibonacci numbers */
printf("%lu, %lu", fib1, fib2);

/* Print the remaining 48 Fibonacci numbers */
for (i = 3; i <= 50; i++)
{
fib3 = fib1 + fib2;
printf(", %lu", fib3);
fib1 = fib2;
fib2 = fib3;
}
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_fibonacci();
printf("\n");

return 0;
}
