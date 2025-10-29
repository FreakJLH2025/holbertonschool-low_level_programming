#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_valid_number - Checks if a string contains only digits.
* @s: The string to check.
*
* Return: 1 if valid, 0 otherwise.
*/
int is_valid_number(char *s)
{
int i = 0;

if (s[0] == '\0')
return (0);

while (s[i])
{
if (!isdigit(s[i]))
return (0);
i++;
    }
return (1);
}

/**
* main - Adds positive numbers passed as arguments.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 if successful, 1 if error.
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
if (!is_valid_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
