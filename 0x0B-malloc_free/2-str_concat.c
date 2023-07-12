#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int s1_length = 0;
unsigned int s2_length = 0;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1_length] != '\0')
s1_length++;
while (s2[s2_length] != '\0')
s2_length++;
concatenated = malloc(sizeof(char) * (s1_length + s2_length + 1));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < s1_length; i++)
concatenated[i] = s1[i];
for (j = 0; j < s2_length; j++)
concatenated[i++] = s2[j];
concatenated[i] = '\0';
return (concatenated);
}
