#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array to reverse
 * @n: Number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
