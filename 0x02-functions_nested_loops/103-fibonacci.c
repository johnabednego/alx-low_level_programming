#include "main.h"

/**
 * fibonacci_sum_even - Calculates the sum of even-valued terms in the Fibonacci sequence.
 * @limit: The maximum value for Fibonacci terms.
 *
 * Return: The sum of even-valued terms.
 */
int fibonacci_sum_even(int limit)
{
int current = 1;
int previous = 1;
int sum = 0;
int temp;

while (current <= limit)
{
if (current % 2 == 0)
sum += current;

temp = current;
current += previous;
previous = temp;
}

return (sum);
}
