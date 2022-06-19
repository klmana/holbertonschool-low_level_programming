#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest:  to memory area
 *@src: bytes from memory area
 *@n: function copies
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);

		i = i + 1;
	}
	return (dest);
}
