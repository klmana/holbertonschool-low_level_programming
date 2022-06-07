#include <stdio.h>

/**
*main - prints the alphabet in lowercase, followed by a new line.
*Return: always 0 when success
*/
int main(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
1++;
}
putchar('\n');
return (0);
}
