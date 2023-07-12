#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in
 *
 * Return: Number of words in the string
 */
int count_words(char *str)
{
int count = 0;
int i = 0;

while (str[i] != '\0')
{
/* Skip leading spaces */
while (str[i] == ' ')
i++;

if (str[i] != '\0')
{
count++;

/* Skip word characters */
while (str[i] != ' ' && str[i] != '\0')
i++;
}
}

return (count);
}

/**
* strtow - Splits a string into words.
* @str: The string to split
*
* Return: Pointer to an array of strings (words), or NULL if it fails
*/
char **strtow(char *str)
{
char **words;
int i, j, k;
int word_count = 0;
int word_length = 0;

if (str == NULL || str[0] == '\0')
return (NULL);

word_count = count_words(str);

if (word_count == 0)
return (NULL);

words = malloc(sizeof(char *) * (word_count + 1));

if (words == NULL)
return (NULL);

i = 0;
k = 0;

while (str[i] != '\0' && k < word_count)
{
/* Skip leading spaces */
while (str[i] == ' ')
i++;

j = i;

/* Calculate word length */
while (str[i] != ' ' && str[i] != '\0')
{
word_length++;
i++;
}

words[k] = malloc(sizeof(char) * (word_length + 1));

if (words[k] == NULL)
{
/* Free memory for already allocated words */
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}

/* Copy word to words[k] */
for (j = 0; j < word_length; j++)
words[k][j] = str[i - word_length + j];
words[k][j] = '\0';

word_length = 0;
k++;
}

words[k] = NULL;

return (words);
}
