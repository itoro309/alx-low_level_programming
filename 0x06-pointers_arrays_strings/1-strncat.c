#include "main.h"
/**
 * _strncat - concatenates
 *
 * @dest: string
 * @src: appended
 * @n: number
 *
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0; /*string lenth for src*/
	int len2 = 0; /*string length for dest */
	int i;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
