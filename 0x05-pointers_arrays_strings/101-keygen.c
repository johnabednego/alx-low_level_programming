#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[PASSWORD_LENGTH + 1];
int i;

srand(time(0));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = rand() % 94 + 33; /* Generate a random printable ASCII character */
}
password[i] = '\0'; /* Add null terminator at the end of the password */

printf("%s\n", password);

return 0;
}
