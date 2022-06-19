#include "main.h"

/**
 *_strchr - function that locates a character in a string.
 *@c: pointer to the first occurrence of the character
 *@s: in the stringpointeR
 *Return: NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (c  == s[i])
		{

			return (&s[i]);
		}

			i = i + 1;
	}
		if (c == '\0')

			return (&s[i]);

		return ("NULL");
}
