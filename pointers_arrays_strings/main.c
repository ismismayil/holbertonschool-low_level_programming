#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[11] = "Holberton!";

	_puts(s);         // prints: Holberton!
	rev_string(s);    // reverses the string
	_puts(s);         // prints: !notrebloH

	return (0);
}
