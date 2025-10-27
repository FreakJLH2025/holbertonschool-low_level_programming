#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of the two diagonals of a square matrix
* @a: Pointer to the first element of the matrix (treated as 1D array)
* @size: Size of the matrix (number of rows or columns)
*
* This function calculates:
* - The sum of the main diagonal (from top-left to bottom-right)
* - The sum of the secondary diagonal (from top-right to bottom-left)
* It then prints both sums separated by a comma.
*/
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];             /* Diagonal principal */
sum2 += a[i * size + (size - 1 - i)]; /* Diagonal secundaria */
}

printf("%d, %d\n", sum1, sum2);
}

