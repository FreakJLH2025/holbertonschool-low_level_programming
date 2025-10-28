#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - Returns the length of a string
* @s: Pointer to the string
* 
* This function recursively counts characters until it reaches
* the null terminator '\0', returning the total length.
*
* Return: The length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
