#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

/**
* puts_half - Prints the second half of a string
* @str: The string to be printed
*/
void puts_half(char *str)
{
int length = _strlen(str);
int i;

if (length % 2 == 0)
i = length / 2;
else
i = (length + 1) / 2;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
