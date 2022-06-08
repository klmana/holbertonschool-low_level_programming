#include <stdio.h>

/**
*main - prints all the numbers of base 16 in lowercase, followed by a new line.
*Return: always 0 when success
*/
int main(void)
{
int number;
char alphabet;
for (number = '0'; number <= '9'; number++)
{
putchar(number);
}
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
putchar(alphabet);
}
putchar('\n')
return (0);
}
