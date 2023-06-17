#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of a randomly generated number
 *              and checks if it is greater than 5, less than 6 but not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d and is ", n, n % 10);
if (n % 10 > 5)
    printf("greater than 5\n");
else if (n % 10 == 0)
    printf("0\n");
else
    printf("less than 6 and not 0\n");

return (0);
}
