#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is retured, and errno is set
 */
void _puts_recursion(char *s)
{
if (*s == 0)
	{
	 _putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
