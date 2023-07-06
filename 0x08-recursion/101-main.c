#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
int r;

r = wildcmp("holberton.c", "*.c");
printf("%d\n", r);

r = wildcmp("holberton", "holberton*d");
printf("%d\n", r);

r = wildcmp("main.c", "ma*********************************************************d");
printf("%d\n", r);

return (0);
}
