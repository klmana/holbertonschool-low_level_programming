#include <stdio.h>

/**
*main - prints the alphabet in lowercase, and then in uppercase
*Return: always 0 when success
*/
int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
