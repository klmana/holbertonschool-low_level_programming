#include "main.h"
/**
 *rev_string - function that reverses a string
 *@s:Write a function that reverses a string
 *
 */
void rev_string(char *s)
{
	char tmp;
	int a, len1, lent2;

	len1 = 0;
	lent2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}
	lent2 = len1 - 1;

	for (a = 0; a < len1 / 2; a++)
		{
			tmp = s[a];
			s[a] = s[lent2];
			s[lent2--] = tmp;
		}
}
