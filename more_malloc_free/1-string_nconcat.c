#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - function that concatenates two strings.
* @s1:first string to concatenate
* @s2: second string to concatenate
* @n: selection of number of bytes
* Return: pointer to the new string created (OK), or KO ( NULL)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;

	len2 = 0;
	len1 = 0;
	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1 = len1 + 1;
	while (s2[len2])
		len2 = len2 + 1;
	if (n < len2)
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	for (i = 0; i < len1; i =  i + 1)
		s3[i] = s1[i];
	for (j = 0; n < len2 && i < (len1 + n); i = i + 1, j = j + 1)
		s3[i] = s2[j];
	for (j = 0; n >= len2 && i < (len1 + len2); i = i + 1, j = j + 1)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
