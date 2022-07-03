#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *@s: function locates the first occurrence in the string
 *@accept: of the bytes in the string
 *Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j = j + 1;
		}
		if (accept[j])
			return (s + i);
	i = i + 1;
	}
	return (0);
}
