#include "main.h"
/**
 *print_alphabet - prints alphabet using for loop
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
