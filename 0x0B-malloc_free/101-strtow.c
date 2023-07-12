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
* allocate_words - Allocates memory for the words in the string.
* @str: The string to split
* @word_count: The number of words in the string
* Return: Pointer to an array of strings (words), or NULL if it fails
*/
char **allocate_words(char *str, int word_count)
{
char **words;
int i;
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);
for (i = 0; i < word_count; i++)
{
words[i] = malloc(sizeof(char) * (strlen(str) + 1));
if (words[i] == NULL)
{
for (i = 0; i < word_count; i++)
free(words[i]);
free(words);
return (NULL);
}
}
return (words);
}

/**
* extract_words - Extracts the words from the string and stores them in the array.
* @str: The string to split
* @words: The array to store the words
* Return: void
*/
void extract_words(char *str, char **words)
{
int i = 0;
int j = 0;
int k = 0;
while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
j = i;
while (str[i] != ' ' && str[i] != '\0')
i++;
copy_word(str, j, i, words[k]);
k++;
}
words[k] = NULL;
}
/**
* strtow - Splits a string into words.
* @str: The string to split
* Return: Pointer to an array of strings (words), or NULL if it fails
*/
char **strtow(char *str)
{
char **words;
int word_count;
if (str == NULL || str[0] == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = allocate_words(str, word_count);
if (words == NULL)
return (NULL);
extract_words(str, words);
return (words);
}
