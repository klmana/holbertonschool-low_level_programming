#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: which consist only of bytes from accept
 *@accept: pointer
 *Return: the number of bytes
 * in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int b = 0;

	while (s[b] != '\0')
	{
		int c = 0;

		while (accept[c] != '\0')
		{
			if (s[b] == accept[c])
			{
				i++;
				break;
			}
			else if (accept[c + 1] == '\0')
			{
				return (i);
			}
			c = c + 1;
		}
		b = b + 1;
	}
	return (i);
}
