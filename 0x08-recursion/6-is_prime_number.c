#include "main.h"

/**
 * prime2 - Makes
 * @a: same number
 * @b: number
 *
 * Return: on success 1.
 * on error
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a. b + 1));
}
/**
 * is_prime_number - checks
 * @n: Number integer
 *
 * Return: on success 1.
 * on error, -1 is returned
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
