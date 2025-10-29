#include "main.h"
#include <stdio.h>

/**
* is_prime_helper - Recursively checks if a number is divisible.
* @n: The number to check.
* @i: The current divisor being tested.
*
* Return: 1 if prime, 0 otherwise.
*/
int is_prime_helper(int n, int i)
{
if (n <= 1)
return (0);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 1));
}

/**
* is_prime_number - Checks if an integer is a prime number.
* @n: The number to check.
*
* Return: 1 if prime, 0 otherwise.
*/
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
