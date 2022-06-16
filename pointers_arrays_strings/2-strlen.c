#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s:provides a similar function: strlen
 *Return: 0
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a]; a=a+1)

	       ;
	a=0;
	while (s[a]!='\0')
	{
		a=a+1;
	}
	return (a);
}
