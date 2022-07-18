#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *bs:provides a similar function: strlen
 *Return: 0
 */
int _strlen(const char *b)
{
	int a;

	for (a = 0; b[a]; a++)
		;
	return (a);
}

/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: the binary
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int length;
	unsigned int index;
	unsigned int sum;

	length = _strlen(b);
	index = 0;
	sum = 0;

	/* case if b is null then value returned should be 0 */
	if (b == NULL)
		return (0);
	/* interate while loop to count on the string of char b*/
	while (b[index] != '\0')
	{
		/* case where there is something else than a 0 and 1 in the string */
		if (b[index] != '0' && b[index] != '1')
			return (0);
		/* case where there is a 1 in the binary value */
		if (b[index] == '1')
			/* if 1 then multiply by power of 2 */
			/* power of 2 is adding 2 0 to the left of binary */
			sum += ((1 * (1 << length))) / 2;
		index++;
		length--;
	}
	return (sum);
}
