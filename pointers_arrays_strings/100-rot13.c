#include "main.h"

/**
 *rot13 - function that encodes a string using rot13.
 *@s: string using rot13.
 *Return: s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPXRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}
