#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - function that prints a name.
 *@name: that prints a name.
 *@f:function that print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
