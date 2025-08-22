#include "main.h"
/*
 ** print_name - Prints a name.
 * @name: The name to be printed
 * @f: A pointer to a function that takes a char* and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
