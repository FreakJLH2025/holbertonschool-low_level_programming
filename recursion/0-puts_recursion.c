#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - Prints a string followed by a new line
* @s: Pointer to the string to be printed
*
* This function uses recursion to print each character of the string
* one by one, followed by a newline when the null terminator is reached.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')  /* Base case: end of string */
{
putchar('\n');
return;
}

putchar(*s);     /* Print current character */
_puts_recursion(s + 1);  /* Recurse with next character */
}
