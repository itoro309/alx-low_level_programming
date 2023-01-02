#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory
 * @b: constant byte
 * @n: bytes
 *
 * Return: Always 0 (Success)
 */
char *_memmset(char *s, char b, unsigned int n)
{
	unsigned int 1;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
