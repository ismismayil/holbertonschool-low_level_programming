#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0, last = 0;
	char rev;

	while (s[last] != '\0')
	{
		last++;
	}
	while (start < last - 1)
	{
		rev = s[start];
		s[start] = s[last];
		s[last] = rev;
		start++;
		last--;
	}
}
