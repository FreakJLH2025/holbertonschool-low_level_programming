#include "main.h"
#include <stdio.h>

/**
*
*main - muestra el valor antes y despues de llamar a reset_to_98
*
*Return always to 0 
*
*/
void reset_to_98(int *n)
{
*n = 98;
}

int main() 
{
int value = 10;
printf("n=%d\n", value);
reset_to_98(&value);
printf("n=%d\n", value);
return (0);
}
