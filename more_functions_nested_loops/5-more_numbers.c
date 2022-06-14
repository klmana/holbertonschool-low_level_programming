#include "main.h"
/**
 *more_numbers - prints 10 times the numbers,from 0 to 14,followed by new line
 *
 */
void more_numbers(void)
{
	int number = 0;
	int times = 1;

	while (times <= 10)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
			_putchar(number / 10 + '0');
			_putchar(number % 10 + '0');
		}
		_putchar('\n');

		times++;
	}
}
