#include <main.h>

/**
*print_alphabet_x10 - Prints the alphabet 10 times
*Return: void
    */
void print_alphabet_x10(void)
{
int i = 0;
char letter;
while (i < 10)
{
    letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
    i++;
}
_putchar('\n');
}
