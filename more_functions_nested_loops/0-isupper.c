#include <stdio.h>
#include "main.h"

/**
* main - tests the _isupper function
*
* Return: Always 0.
*/
int main(void)
{
char ch = 'G';
if (_isupper(ch))
printf("%c is uppercase\n", ch);
else
printf("%c is not uppercase\n", ch);

return (0);
}
