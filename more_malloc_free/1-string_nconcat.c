#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates s1 and first n bytes of s2
* @s1: First string
* @s2: Second string
* @n: Number of bytes from s2
*
* Return: Pointer to new string, or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

while (i < len1)
{
concat[i] = s1[i];
i++;
}
while (j < n)
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0';

return (concat);
}
