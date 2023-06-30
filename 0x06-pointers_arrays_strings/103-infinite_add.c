#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r).
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, sum = 0, carry = 0;
int i, j, k;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 >= size_r || len2 >= size_r)
return (0);

i = len1 - 1;
j = len2 - 1;
k = size_r - 1;

while (i >= 0 || j >= 0 || carry != 0)
{
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
r[k--] = (sum % 10) + '0';
}

if (k >= 0 && r[k] == '0')
k++;

for (i = 0; k < size_r; i++, k++)
r[i] = r[k];

r[i] = '\0';

return (r);
}
