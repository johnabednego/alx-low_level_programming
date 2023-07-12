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
while (str[i] == ' ')
i++;

if (str[i] != '\0')
{
count++;

while (str[i] != ' ' && str[i] != '\0')
i++;
}
}

return (count);
}

/**
* copy_word - Copies a word from the source string to the destination string.
* @src: The source string containing the word
* @start: The starting index of the word in the source string
* @end: The ending index of the word in the source string
* @dest: The destination string to copy the word to
*/
void copy_word(char *src, int start, int end, char *dest)
{
int i;

for (i = start; i < end; i++)
dest[i - start] = src[i];

dest[i - start] = '\0';
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
while (str[i] == ' ')
i++;

j = i;

while (str[i] != ' ' && str[i] != '\0')
{
word_length++;
i++;
}

words[k] = malloc(sizeof(char) * (word_length + 1));

if (words[k] == NULL)
{
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}

copy_word(str, j, i, words[k]);

word_length = 0;
k++;
}

words[k] = NULL;

return (words);
}
