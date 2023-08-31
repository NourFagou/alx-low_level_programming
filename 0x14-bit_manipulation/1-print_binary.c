#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
	current	= n >> j;
	if (current & 1)
	{
		_putchar('1');
			counter++;
	}
	else if (counter)
		_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
