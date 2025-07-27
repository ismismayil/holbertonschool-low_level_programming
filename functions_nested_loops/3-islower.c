#include "main.h"
#include <ctype.h>
/**
 * _islower -  Checks for lowercase character.
 *
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

