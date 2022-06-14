#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	while (a < n)
	{
		while (b <= a)
		{
			if (b != a)
				_putchar(' ');
			else
				_putchar('\\');
			b += 1;
		}
		_putchar('\n');
		a += 1;
		b = 0;
	}
	if (n <= 0)
		_putchar('\n');

}
