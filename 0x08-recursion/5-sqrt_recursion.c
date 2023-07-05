#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root
 * @n: The number to calculate its square root
 * @i: The current value to check
 *
 * Return: The square root if it exists, -1 otherwise
 */
int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return (i);

return (sqrt_helper(n, i + 1));
}

/**
* _sqrt_recursion - Calculates the natural square root of a number
* @n: The number to calculate its square root
*
* Return: The square root if it exists, -1 otherwise
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqrt_helper(n, 0));
}
