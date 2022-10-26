#include "main.h"
/**
 * reverse_array - function that reverses an array of integers
 * @a: param1
 * @n: param2
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
