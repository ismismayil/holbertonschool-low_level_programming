#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name.
 * @name: The name to be printed
 * @f: A pointer to a function that takes a char* and returns void
 *
 * Description: This function prints the provided name by calling the
 * function pointed to by 'f'. If 'name' or 'f' is NULL, the function
 * does nothing.
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
