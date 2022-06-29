#include <stdlib.h>
#include "main.h"

/**
 *_strlen - function that returns the length of a string.
 *@s:provides a similar function: strlen
 *Return: 0
 *we define *s as a pointer to the integer s
 *we define a variable a that is the length of the string s
 *s[a] is definining an array of the length of the string of characters defined
 *the for loop takes all the possible values of a from 0 until the end of
 *then the function returns the lenghts of s whcih is an
 */
int _strlen(char *s)
{
	int a;

a = 0;
while (s[a] != '\0')
{
	a = a + 1;
}
return (a);
}


/**
 *string_nconcat - function that concatenates two strings.
 *@s1:first string to concatenat
 *@s2: second string to concatenate
 *@n: selection of number of bytes
 *Return: pointer to the new string created (OK), or KO ( NULL)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int space1;
	unsigned int space2;
	unsigned int len1;
	unsigned int len2;
	unsigned int len3;

	space1 = 0;
	space2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);

	len2 = _strlen(s2);
	if (len2 > n)
	{
		len2 = n;
	}
	len3 = len1 + len2;
	s3 = malloc(sizeof(*s3) * (len3 + 1) + n + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	while (space1 < len1)
	{
		s3[space1] = s1[space1];
		space1++;
	}
	while (space1 < len3)
	{
		s3[space1] = s2[space2];
		space1++;
		space2++;
	}
	s3[space1] = '\0';
	return (s3);
}
