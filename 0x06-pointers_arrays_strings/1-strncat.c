#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most 'n' bytes from 'src'
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from 'src'
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*dest)
dest++;
while (*src && n--)
*dest++ = *src++;
*dest = '\0';

return (ptr);
}
