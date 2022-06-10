#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: starting count
 *Return: no return
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
}
