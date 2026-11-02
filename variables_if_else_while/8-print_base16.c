#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
