#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times using for loop
*/
void print_alphabet_x10(void)
{
	int times;
	char letter;

	times = 1;
	while (times < 11)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

	times++;
	}
}
