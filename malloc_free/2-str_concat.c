#include <stdlib.h>
#include "main.h"

/**
* *str_concat - concatenates two strings
* @s1:first  string to concatenate
* @s2: second string to concatenate
*
* Return: pointer to the new string created (OK), or KO ( NULL)
*/
char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int i;
unsigned int len1;
unsigned int len2;

len2 = 0;
len1 = 0;
i = 0;

while (s1[len1])
	len1 = len1 + 1;
while (s2[len2])
	len2 = len2 + 1;

s3 = malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
	return (NULL);

i = 0;
while (i < (len1 + len2))
{
	if (i >= len1)
		s3[i] = s2[i - len1];
	else
		s3[i] = s1[i];
	i = i + 1;
}
s3[i] = '\0';
return (s3);
}
