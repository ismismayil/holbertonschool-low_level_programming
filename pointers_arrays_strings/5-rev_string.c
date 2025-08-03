#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int 1st = 0, last = 0;
	char rev;

	while (s[last] != '\0')
	{
		last++;
	}
	while (1st < last - 1)
	{
		rev = s[1st];
		s[1st] = s[last];
		s[last] = rev;
		1st++;
		last--;
	}
}
