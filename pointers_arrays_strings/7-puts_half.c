#include "main.h"
/**
 *strlen - return the lenght of s string
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
 *puts_half - prints half of a string, followed by a new line.
 *@str:function should print the second half of the string
 */
void puts_half(char *str)
{
	int n;
	int len;

	len = _strlen(str);
	n = ((len - 1) / 2) + 1;

	while (n <= len - 1)
	{
		_putchar(str[n]);
		n = n + 1;
	}
	_putchar('\n');
}
