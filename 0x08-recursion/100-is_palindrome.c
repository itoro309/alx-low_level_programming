#include "main.h"

/**
 * palind2 - obtains
 * @a: string
 * @l: integer
 *
 * Return: on success 1.
 * on error, -1 is returned
 */
int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l + 1));
}
/**
 * palind3 - compares
 * @a: string
 * @l: length
 *
 * Return: on success 1.
 * on error, -1 is returned
 */

int palind3(char *a, int l)
{
	if (*a != *(a + 1))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - checks
 * @s: string
 *
 * Return: on success 1.
 * on error, -1 is returned
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
