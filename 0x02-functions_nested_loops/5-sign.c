#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: the number to be cheched
 * Return: 1 for possitive num, -1 for negative num or zero
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
