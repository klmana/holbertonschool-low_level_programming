#include "variadic_functions.h"

/**
  *print_numbers - function that print the numbers
  *@n: variable unsigned int
  *@separator: pointer
  *Return: numbers
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		else if (i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
		i = i + 1;
	}
	va_end(list);
	printf("\n");
}
