#include "variadic_functions.h"

/**
  *print_strings - Function that print string
  *@n: variable unsigned in
  *@separator: pointe
  *Return: string
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	i = 0;
		while (i < n)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = ("nil");
		if (separator == NULL)
			printf("%s", str);
		else if (i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
		i = i + 1;
	}
	va_end(list);
	printf("\n");
}
