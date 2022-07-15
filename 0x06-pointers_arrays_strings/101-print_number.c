#include "main.h"

/**
 * print_number - prints an integer
 * @n;integer to ne printed
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putvhar((num % 10) + '0');
}
