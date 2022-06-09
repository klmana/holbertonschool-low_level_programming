#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks for alphabetic character
 *@c: char being checked
 *Return: return 1 if c is an alpha , 0 otherwise
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
		return (1);
	else
		return (0);
}
