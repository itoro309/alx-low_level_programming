#include "main.h"

/**
 * factorial - gets factorial
 * @n: integer
 *
 * Return: on success 1.
 * on error, -1 is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
