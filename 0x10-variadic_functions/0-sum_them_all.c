#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: input integer
 *
 * Return: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int abc = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (abc < n)
		{
			sum += va_arg(args, int);
			abc++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
