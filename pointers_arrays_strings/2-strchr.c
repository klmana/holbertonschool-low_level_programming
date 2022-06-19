#include "main.h"

/**
 *_strchr - function that locates a character in a string.
 *@c: pointer to the first occurrence of the character
 *@s: in the stringpointeR
 *@NULL: if the character is not found
 *Return: dest
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
				}
		if (i == 0)
		{
			return ("NULL");
				}
	}
}
