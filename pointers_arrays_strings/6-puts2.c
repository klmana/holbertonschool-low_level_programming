#include "main.h"
/**
 *puts2 - character of a string, starting with the first character
 *@str: char type pointer
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
