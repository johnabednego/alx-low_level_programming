#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number @n
 */
unsigned long largest_prime_factor(unsigned long n)
{
unsigned long i;

for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
n /= i;
i--;
}
}
return (i);
}

/**
* entry - Entry point
*
* Return: Always 0
*/
int entry(void)
{
unsigned long number = 612852475143;
unsigned long largest_prime;

largest_prime = largest_prime_factor(number);
_putchar(largest_prime + '0');
_putchar('\n');

return (0);
}
