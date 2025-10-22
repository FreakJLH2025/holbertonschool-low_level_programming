#include "main.h"
#include <stdio.h>

/**
* _atoi - converts a string to an integer
* @s: pointer to the string
*
* Return: the converted integer
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int started = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;

if (sign == 1)
{
if (result > (2147483647 - (s[i] - '0')) / 10)
return (2147483647); /* overflow protection */
result = result * 10 + (s[i] - '0');
}
else
{
if (result < (-2147483648 + (s[i] - '0')) / 10)
return (-2147483648); /* underflow protection */
result = result * 10 - (s[i] - '0');
}
}
else if (started)
{
break;
}
i++;
}

return (result);
}
