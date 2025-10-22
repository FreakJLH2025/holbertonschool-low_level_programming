#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenates two strings using at most n bytes from src
* @dest: destination string to append to
* @src: source string to append
* @n: maximum number of bytes to use from src
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

/* Find the end of dest */
while (dest[i] != '\0')
{
i++;
}

/* Append at most n bytes from src */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0'; /* Add null terminator */

return (dest);
}
