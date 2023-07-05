#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: String containing the characters to match
 *
 * Return: Number of bytes in the initial segment of @s
 *         which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
int match;

for (i = 0; s[i]; i++)
{
match = 0;
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
count++;
match = 1;
break;
}
}
if (!match)
break;
}

return (count);
}
