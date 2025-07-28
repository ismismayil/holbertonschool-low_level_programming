#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: the number of times the character \
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			n--;
			_putchar(' ' * n);
			_putchar('\\');
		}
		_putchar('\n');
	}
}
