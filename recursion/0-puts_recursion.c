#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - Prints a string followed by a new line
* @s: Pointer to the string to be printed
*
* This function uses recursion to print each character of the string.
* It avoids using putchar, relying instead on printf (allowed) or puts.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
puts("");  /* Print newline only */
return;
}

printf("%c", *s);         /* Print current character */
_puts_recursion(s + 1);   /* Recurse with next character */
}

