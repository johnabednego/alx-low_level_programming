#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be printed
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
putchar(str[i]);
i++;
}

putchar('\n');
}
