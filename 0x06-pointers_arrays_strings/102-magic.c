#include "main.h"

int main(void)
{
int a[5] = {1, 2, 4, 98, 1024};
int *p;

p = &a[2];
*(p + 1) = 98;

return (0);
}
