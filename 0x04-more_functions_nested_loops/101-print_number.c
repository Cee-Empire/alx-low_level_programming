#include "main.h"
#include "my_putchar.h"

/**
 * print_number - print an integer
 * @n: parameter, integer value/ input
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
	_putchar(45);
	i = -1;
	}
	if (i / 10)
	{
	print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
