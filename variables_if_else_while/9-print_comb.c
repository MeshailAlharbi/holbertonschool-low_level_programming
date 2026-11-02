#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int space = ' ';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(space);
		}
		else
		{
			space = '\n';
			putchar(space);
		}
		n++;
	}

	return (0);
}
