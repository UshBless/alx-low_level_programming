#include "main.h"

/**
 * is_prime_number - returns 1 if a number is prime
 * @n: number to be tested
 *
 * Return: return 1 if the output integer is a prime number
 * otherwise returns 0 if number is not prime
 */

int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
		_is_prime = 0;
	else if (n == 2)
		_is_prime = 1;
	else if (n % 2 == 1)
		_is_prime = 1;
	return (_is_prime);
}
