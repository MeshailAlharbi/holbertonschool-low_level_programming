#include <stdio.h>

/* Print all the letters except q and e */
int main(void)
{
	char letter ='a'

	while (letter <= 'z')
{
	if (letter != 'q' && letter != 'e')
	{
    putchar(letter);
	}
    letter++;
}

putchar('\n');

return (0);
