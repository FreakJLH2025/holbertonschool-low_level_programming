#include "main.h"
#include <stdio.h>

/**
* _strcat - concatenates two strings
* @dest: destination string to append to
* @src: source string to append
*
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

/* Find the end of dest */
while (dest[i] != '\0')
{
i++;
}

/* Append src to dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0'; /* Add null terminator */

return (dest);
}
