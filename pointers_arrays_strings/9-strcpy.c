#include "main.h"
/**
*_strlen - return the lenght of s string
*@s: character type
*Return: i
*/
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\n), to the buffer pointed to by dest
 * @dest: character type
 * @src: character type
 * i - integer type
 * len - integer type
 * Return: character value type
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src);
	i = 0;

	while (i <= len - 1)
	{
		dest[i] = src[i];
		i = i + 1;
	}

		dest[i] = '\0';
	return (dest);
}
