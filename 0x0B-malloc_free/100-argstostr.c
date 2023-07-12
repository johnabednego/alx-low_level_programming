
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *concatenated;
int i, j;
int total_length = 0;
int current_length = 0;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++; /* Add space for newline character */
}

concatenated = malloc(sizeof(char) * (total_length + 1));

if (concatenated == NULL)
return (NULL);

/* Copy each argument and append newline character */
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
concatenated[current_length] = av[i][j];
current_length++;
j++;
}
concatenated[current_length] = '\n';
current_length++;
}

concatenated[current_length] = '\0';

return (concatenated);
}
