#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: Starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
		n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n + '0');
		n--;
		}
	}
}
