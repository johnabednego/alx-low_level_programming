#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
printf("%d", digit);
printf("\n");
return 0;
}
