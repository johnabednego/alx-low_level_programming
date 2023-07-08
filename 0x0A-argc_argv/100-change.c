#include <stdio.h>
#include <stdlib.h>

unsigned int minimum_coins(int cents);

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int cents = atoi(argv[1]);
unsigned int min_coins = minimum_coins(cents);
printf("%u\n", min_coins);

return (0);
}
