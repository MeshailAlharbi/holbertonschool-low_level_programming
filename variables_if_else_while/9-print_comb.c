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

	while (i <= '7')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i != '7' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
