#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer, or 0 if no numbers
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int found_digit = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = (result * 10) + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		else if (found_digit == 1)
		{
			break;
		}
		i++;
	}

	if (found_digit == 0)
	{
		return (0);
	}

	if (sign < 0)
	{
		return ((int)(-result));
	}

	return ((int)result);
}
