#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes
 * @c: the character
 *
 * Return: On success 1
 * On Eroor
 */
int_putchar(char c)
{
	return (write (1, &c,1));
}
