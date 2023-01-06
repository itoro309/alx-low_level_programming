#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes
 * @c: Ther character
 *
 * Return: on success 1.
 * on err0, -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
