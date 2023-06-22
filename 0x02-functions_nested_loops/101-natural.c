#include "main.h"

/**
 * sum_of_multiples - Computes and prints the sum of all multiples of 3 or 5
 * below 1024.
 *
 * Return: The sum of the multiples.
 */
int sum_of_multiples(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}

return (sum);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
int result;

result = sum_of_multiples();
_putchar(result / 1000 + '0');
_putchar((result / 100) % 10 + '0');
_putchar((result / 10) % 10 + '0');
_putchar(result % 10 + '0');
_putchar('\n');

return (0);
}
