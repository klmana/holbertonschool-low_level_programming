#include "main.h"
/**
 *print_numbers - from 0 to 9, followed by a new line.
 *
 */
void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		_putchar(number);
	_putchar('\n');
}
