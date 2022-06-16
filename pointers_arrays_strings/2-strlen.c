#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s:provides a similar function: strlen
 *Return: 0
 *we define *s as a pointer to the integer s
 *we define a variable a that is the length of the string s
 * s[a] is definining an array of the length of the string of characters defined by s
 * the for loop takes all the possible values of a from 0 until the end of the arrray done by s
 *then the function returns the lenghts of s whcih is an
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
