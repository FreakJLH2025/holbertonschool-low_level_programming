#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 0; i < 16; i++)
putchar(i < 10 ? i + 48 : i + 87);

putchar(10);

return (0);
}
