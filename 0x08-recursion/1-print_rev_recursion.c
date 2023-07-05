#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed
 */
int _putchar(char c);

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
_putchar(*s);
}
