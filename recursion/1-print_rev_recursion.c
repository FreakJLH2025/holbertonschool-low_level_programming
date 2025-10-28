#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Prints a string in reverse using recursion
* @s: Pointer to the string to be printed
*
* This function recursively moves to the end of the string,
* then prints each character as the call stack unwinds.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);  /* Move to the end first */
_putchar(*s);                 /* Print character on the way back */
}
