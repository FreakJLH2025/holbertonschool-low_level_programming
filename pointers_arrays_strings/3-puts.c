#include "main.h"
#include <unistd.h>

/**
* _puts - prints a string followed by a new line
* @str: pointer to the string to print
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
