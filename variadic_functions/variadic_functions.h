#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 *struct type - Struct data types
 *@s: data type argument
 *@function: The function associated
 *
 */
typedef struct types
{
	char *s;
	void (*function)(va_list list);
}
	list_types;

#endif
