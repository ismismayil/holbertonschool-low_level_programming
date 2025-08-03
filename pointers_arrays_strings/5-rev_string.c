#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char z;

	while (s[j])
		j++;

	j--;

	while (i < j)
	{
		z = s[i];
		s[i] = s[j];
		s[j] = z;
		i++;
		j--;
	}
}
