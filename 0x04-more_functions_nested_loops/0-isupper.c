#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * 0c: input
 * Return: 1 if c is an uppercase character, 0 in other case
 */
int _isupper(char c)
{
	if ((c >= 65) && (c <= 90))

		return (1);

	else

		return (0);
}
