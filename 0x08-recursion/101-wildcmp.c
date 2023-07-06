#include "main.h"

int wildcmp_helper(char *s1, char *s2);

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
return (wildcmp_helper(s1, s2));
}

/**
 * wildcmp_helper - Recursive helper function to compare two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp_helper(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0') /* Trailing '*' matches anything */
return (1);
if (*s1 != '\0' && wildcmp_helper(s1 + 1, s2)) /* Match '*' with a character */
return (1);
return (wildcmp_helper(s1, s2 + 1)); /* Skip '*' and continue */
}
if (*s1 == '\0' && *s2 == '\0') /* Both strings reached the end */
return (1);
if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') /* Characters match */
return (wildcmp_helper(s1 + 1, s2 + 1)); /* Continue matching */
return (0); /* Characters don't match */
}
