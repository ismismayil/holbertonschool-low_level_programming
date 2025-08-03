#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int first = 0, last = 0;
	char rev;

	while (s[last] != '\0')
	{
		last++;
	}
	while (first < last - 1)
	{
		rev = s[first];
		s[first] = s[last];
		s[last] = rev;
		first++;
		last--;
	}
}
