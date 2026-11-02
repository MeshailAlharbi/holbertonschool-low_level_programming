#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers,
 *        separated by `, `, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j;
	int c;

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			c = i;
			putchar(c);
			c = ',';
			putchar(c);
			c = j;
			putchar(c);
			if (i == '8' && j == '9')
			{
				c = '\n';
			}
			else
			{
				c = ' ';
			}
			putchar(c);
			j++;
		}
		i++;
	}

	return (0);
}
