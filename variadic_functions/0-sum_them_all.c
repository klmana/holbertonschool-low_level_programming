#include "variadic_functions.h"

/**
  *sum_them_all - function that returns the sum of all its parameters
  *@n: variable unsigned int
  *Return: add
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int total;
	unsigned int i;

	total = 0;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		total = total + va_arg(list, int);
		i = i + 1;
	}

	va_end(list);
	return (total);
}
