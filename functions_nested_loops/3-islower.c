#include "main.h"
/**
 *_islower - checks for lowercase character for c
 *Return: 1 if OK 0 if KO
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
