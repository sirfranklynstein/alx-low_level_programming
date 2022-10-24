#include "main.h"

/**
 * function returns length of string
 *
 * Return: Always 0
 */

int _strlen(char *s);
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}
