#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - Returns a heap-allocated
 *            copy of the given string.
 * @str - null-terminated input string to duplicate
 *
 * Return: pointer to the duplicated
 *         string on success, or NULL on failure.
 *         The returned buffer must be freed by the caller.
 */
char *_strdup(char *str)
{
	unsigned int i, k;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k] != '\0'; k++)
		;
	a = malloc((k + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= k; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
