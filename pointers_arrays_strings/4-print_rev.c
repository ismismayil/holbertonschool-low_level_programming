#include "main.h"
#include <string.h>
/**
 * print_rev - Prints a string, in reverse
 * @s: Pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int rev = strlen(s) - 1;

	for (;rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
