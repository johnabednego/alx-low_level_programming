#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c);

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}
