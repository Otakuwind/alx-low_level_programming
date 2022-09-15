#include "main.h"

void print_uint(unsigned int n);

/**
 * print_number - print number
 * @var: variable to be printed
 *
 *
 */
void print_number(int var)
{
	void print(unsigned int n)
	{
		if (n / 10)
			print(n / 10);
		_putchar('0' + n % 10);
	}
