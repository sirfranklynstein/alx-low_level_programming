#include "main.h"

/**
 * swaps_int - A function that swaps two integers
 * @a: parameter1
 * @b:parameter2
 *
 * Return : Always success (0)
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
