#include "main.h"
#include <stdio.h>

/**
* leet - encodes a string into 1337
* @str: input string
*
* Return: pointer to the encoded string
*/
char *leet(char *str)
{
char letters[] = "aAeEoOtTlL";
char codes[]   = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
str[i] = codes[j];
break;
}
}
}

return (str);
}
