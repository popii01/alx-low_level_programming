#include "main.h"
/**
 * _strlen_recursion - Returns the string’s length.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}

	return (longit);
}
