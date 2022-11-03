#include "main.h"
#include <stdio.h>

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: interator.
 * Return: square root or -1
 */

int power_operation(int n, int c)
{
	/*Evaluate function*/
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n) /*Condition base*/
		return (i);

	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion - evaluate sqrt
 * @n: integer
 * Return: sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0) /*if n is negative*/
		return (-1);

	else
	{
		return (_evaluate(i, n)); /*Recursive call*/
	}
}
