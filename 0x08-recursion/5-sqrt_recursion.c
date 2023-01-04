#include "main.h"

/**
 * sqrt2 - Makes
 * @a: same number
 * @b: number
 *
 * Return: on success 1.
 * on error
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns
 * @n: Number integer
 *
 * Return: on success 1.
 * on error, -1 is returned
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
