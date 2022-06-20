#include "main.h"

/**
 *_pow_recursion - function that returns value of x raised to the power of y
 *@x: value
 *@y: power
 * Return: -1 if error, 1 if 0,value otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
