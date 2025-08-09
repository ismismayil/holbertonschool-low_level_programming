#include "main.h"
#include <stddef.h>
/**
 * *_strchr - Locates a character in a string.
 * @s: string
 * @c: character to be located
 *
 * Return: *s or NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
