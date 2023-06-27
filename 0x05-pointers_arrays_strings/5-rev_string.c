#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to a string
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;

while (*s != '\0')
{
length++;
s++;
}

for (i = 0; i < length / 2; i++)
{
temp = *(s - i - 1);
*(s - i - 1) = *(s - length + i);
*(s - length + i) = temp;
}
}
