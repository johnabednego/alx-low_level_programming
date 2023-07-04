#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string of accepted characters
 *
 * Return: Number of bytes in the initial segment of (s) which consist only of
 *         bytes from (accept)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
char *s_start = s;

while (*s != '\0')
{
found = 0;
while (*accept != '\0')
{
if (*s == *accept)
{
count++;
found = 1;
break;
}
accept++;
}
if (found == 0)
break;
s++;
accept = s_start;
}

return (count);
}
