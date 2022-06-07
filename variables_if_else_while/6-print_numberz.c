#include <stdio.h>

/**
*main - prints all single digit numbers of base 10 starting from 0,
*Return: always 0 when success
*/
int main(void)
{
int number = '0';
while (number <= '9')
{
putchar(number);
number++;
}
putchar('\n')
return (0);
}
