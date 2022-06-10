#include "main.h"
/**
 *print_last_digit - f unction that prints the last digit of a number.
 *@n:check the code
 *Return: Always 0
 */
int print_last_digit(int n)
{
	int i = (n % 10);

	if (i < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}
