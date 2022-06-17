#include "main.h"

/**
 *_strcat - function that concatenates two strings.
 *@src: overwriting the terminating null byte (\0)
 *@dest: This function appends the src string to the dest string,
 *Return : a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a = a + 1;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a = a + 1;
		b = b + 1;
	}
	dest[a] = '\0';

	return (dest);
}
