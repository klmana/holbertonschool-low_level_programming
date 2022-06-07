#include <stdio.h>

/**
*main - print alphabet lowercase without e and q
*Return: always 0 when success
*/
int main(void)
{
int letter = 'a';
while (letter <= 'z')
{
if (letter == 'e' || letter == 'q')
{
letter += 1;
}
else
{
putchar(letter);
letter += 1;
}
putchar('\n');
return (0);
}
