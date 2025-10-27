#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;

for (int i = 0; i < size; i++)
{
sum1 += a[i * size + i];             // Diagonal principal
sum2 += a[i * size + (size - 1 - i)]; // Diagonal secundaria
}

printf("%d, %d\n", sum1, sum2);
}
