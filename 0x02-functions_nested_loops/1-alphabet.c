#include "main.h"
/**
 * print_alphabet- Function that prints out alphabet in its lowercase
 *
 * Result: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
