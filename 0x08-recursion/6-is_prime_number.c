#include "main.h"
int is_divisible(int numb, int divi);

/**
 * is_prime_number - Afunction that checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int divi = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, divi));
}

/**
 * is_divisible - check if num is divisible
 * @numb: the number to be checked
 * @divi: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int numb, int divi)
{
	if (numb % divi == 0)
		return (0);

	if (divi == numb / 2)
		return (1);

	return (is_divisible(numb, divi + 1));
}
