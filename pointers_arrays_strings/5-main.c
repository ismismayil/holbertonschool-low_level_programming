#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[11] = "Holberton!";

	_puts(s);
	rev_string(s);
	_puts(s);

	return (0);
}
