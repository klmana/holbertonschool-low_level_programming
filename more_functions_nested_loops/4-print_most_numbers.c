#include "main.h"
/**
 *print_most_numbers - function that prints the numbers, from 0 to 9
 *
 *
 */
void print_most_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		if (number == '2' || number == '4')
		{
			number += 1;
		}
		else
		{
			_putchar(number);
			number += 1;
		}
	}
	_putchar('\n');
}
