#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
_printf("FizzBuzz ");
else if (i % 3 == 0)
_printf("Fizz ");
else if (i % 5 == 0)
{
if (i == 100) /* Prevent trailing space after Buzz */
_printf("Buzz");
else
_printf("Buzz ");
}
else
_printf("%d ", i);
}

_printf("\n");

return (0);
}
