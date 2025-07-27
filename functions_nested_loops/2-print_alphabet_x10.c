#include "main.h"
/**
 * printt_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	char C;

	for (c = 0; c <= 9; c++)
	{
		for (C = 'a'; C <= 'z'; C++)
		{
			_putchar(C);
		}
		_putchar('\n');
	}
}
