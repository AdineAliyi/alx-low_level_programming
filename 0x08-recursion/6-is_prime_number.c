#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * isPrime - checks if num is prime
  * @num: the nimber
  * @i: counter
  * Return: 0-not prime, 1-prime
  */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
