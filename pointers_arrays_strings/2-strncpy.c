#include "main.h"
#include <stdio.h>

/**
* _strncpy - copies a string up to n bytes
* @dest: destination buffer
* @src: source string
* @n: maximum number of bytes to copy
*
* Return: pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

/* Copy characters from src to dest */
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

/* Pad with null bytes if src is shorter than n */
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
