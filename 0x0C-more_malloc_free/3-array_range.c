#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value of the array
 * @max: Maximum value of the array
 *
 * Return: Pointer to the newly created array
 *         If min > max or if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
int *arr, i, size;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++, min++)
arr[i] = min;

return (arr);
}
