#include <stdlib.h>

/**
* _strdup - Duplicates a string using malloc
* @str: String to duplicate
*
* Return: Pointer to new string, or NULL on failure
*/
char *_strdup(char *str)
{
char *copy;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);

for (i = 0; i <= len; i++)
copy[i] = str[i];

return (copy);
}
