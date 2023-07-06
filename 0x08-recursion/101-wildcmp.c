#include "main.h"

int match(char *s1, char *s2);

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 *            identical, otherwise returns 0.
 * @s1: The first string to compare.
 * @s2: The second string to compare (may contain the wildcard character '*').
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);
return (match(s1, s2 + 1));
}
return (match(s1, s2));
}

/**
* match - Recursively compares two strings and returns 1 if they can be
*         considered identical, otherwise returns 0.
* @s1: The first string to compare.
* @s2: The second string to compare.
*
* Return: 1 if the strings can be considered identical, otherwise 0.
*/
int match(char *s1, char *s2)
{
if (*s2 == '*')
return ((match(s1, s2 + 1)) || (match(s1 + 1, s2)));
else if (*s2 == '\0' && *s1 == '\0')
return (1);
else if (*s2 == '\0' || *s1 == '\0')
return (0);
else if (*s1 == *s2)
return (match(s1 + 1, s2 + 1));
return (0);
}
