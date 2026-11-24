#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char from a va_list
 * @arg: va_list pointing to the char argument
 *
 * Return: nothing
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an int from a va_list
 * @arg: va_list pointing to the int argument
 *
 * Return: nothing
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float from a va_list
 * @arg: va_list pointing to the float argument
 *
 * Return: nothing
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string from a va_list, or (nil) if NULL
 * @arg: va_list pointing to the string argument
 *
 * Return: nothing
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything according to a format string
 * @format: string of characters representing argument types
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != *(funcs[j].symbol))
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			funcs[j].print(args);
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
