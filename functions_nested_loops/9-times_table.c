#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return nothing as void
 */
void times_table(void)
{
	int number;
	int multiplier;
	int product;

	for (number = 0; number <= 9; number++)
	{
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			product = number * multiplier;
			if (multiplier != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (product < 10 && multiplier != 0)
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
