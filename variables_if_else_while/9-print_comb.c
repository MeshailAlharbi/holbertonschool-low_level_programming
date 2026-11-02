#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j;

	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
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
