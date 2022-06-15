#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s:provides a similar function: strlen
 *Return: 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
		;
	return (a);
}
