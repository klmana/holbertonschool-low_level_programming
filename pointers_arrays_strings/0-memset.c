#include "main.h"
#include <stdio.h>
/**
 *_memset - function that fills memory with a constant byte
 *@b: with the constant byte
 *@s: bytes of the memory area pointed
 *@n: function fills the firs
 *Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;

		i++;
	}
	return (s);
}
