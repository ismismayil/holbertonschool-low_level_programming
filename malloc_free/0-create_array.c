#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Allocates a char array filled with `c`
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}
