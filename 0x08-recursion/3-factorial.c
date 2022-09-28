#include "main.h"

/**
 * factorial - returns the factorial of n.
 * @n: the character to give factorial.
 *
 * Return int.
 */
int factorial(int n)
{
	if (n == 0 || n ==1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
