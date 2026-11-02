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
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				c = ',';
				putchar(c);
				c = ' ';
				putchar(c);
			}
			j++;
		}
		i++;
	}
	c = '\n';
	putchar(c);

	return (0);
}
