#include "main.h"
#include <stdio.h>

/**
* cap_string - capitalizes all words of a string
* @str: the string to modify
*
* Return: pointer to the modified string
*/
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;
char separators[] = " \t\n,;.!?\"(){}";
int j;

while (str[i] != '\0')
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
capitalize_next = 0;
}

/* Check if current character is a separator */
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j])
{
capitalize_next = 1;
break;
}
}

i++;
}

return (str);
}
