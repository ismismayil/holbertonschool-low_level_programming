#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: Array of integers
 * @n: Number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
