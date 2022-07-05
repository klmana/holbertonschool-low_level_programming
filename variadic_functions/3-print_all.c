#include "variadic_functions.h"

/**
 * ptr_char - prints the characters from the arguments
 *@list: arguments list
 *Return: nothing
 */
void ptr_char(va_list list)
{
	printf("%c", va_arg(list, int));
}


/**
 *ptr_int - prints the integers from the arguments
 *@list: arguments list
 *Return: nothing
 */
void ptr_int(va_list list)
{
	printf("%i", va_arg(list, int));
}


/**
 *ptr_float - prints the float integers from the arguments
 *@list: arguments list
 *Return: nothing
 */
void ptr_float(va_list list)
{
	printf("%f", va_arg(list, double));
}


/**
 *ptr_string - prints the strings from the arguments
 *@list: arguments list
 *Return: nothing
 */
void ptr_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = ("(nil)");
	}
	printf("%s", s);
}

/**
  *print_all - function that print all
  *@format: const
  *Return: the values of the types of arguments
  */

void print_all(const char * const format, ...)
{
	list_types array[] = {
		{"c", ptr_char},
		{"i", ptr_int},
		{"f", ptr_float},
		{"s", ptr_string},
		{NULL, NULL}
		};

	int i;
	int j;
	va_list list;
	char *separator = "";

	va_start(list, format);

	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *array[j].s)
			{
				printf("%s", separator);
				array[j].function(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
