#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of the parametres
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;
// conditions of if
	if (n == 0)
		return (0);
	
	va_start(valist, n);
// starting the loop
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
