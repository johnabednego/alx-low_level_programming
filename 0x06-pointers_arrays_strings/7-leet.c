#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i = 0;
int j;
char letters[] = "aAeEoOtTlL";
char leet[] = "4433007711";

while (str[i] != '\0')
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet[j];
break;
}
}
i++;
}

return (str);
}
