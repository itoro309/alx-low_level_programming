#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes
 * @c: character
 *
 * Return: on success 1
 * on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
