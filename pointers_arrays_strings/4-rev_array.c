#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverses the content of an array of integers
* @a: pointer to the array
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
int i = 0;
int temp;

while (i < n / 2)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
i++;
}
}
