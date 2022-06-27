#include "main.h"
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: allocates memory for an array of nmemb
 *@size: bytes each and returns a pointer to the allocated memory.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i = i + 1;
	}
	return (ptr);
}
