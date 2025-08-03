#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 * Return: The integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign = sign * -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10;
			num = num + s[i] - 48;
		}
		else
		{
			if (num != 0)
			{
				break;
			}
		}
		i++;
	}
	num *= sign;
	return (num);
}
