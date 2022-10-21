#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints 0 to 9
 *
 * Return: The numbers 0 - 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
