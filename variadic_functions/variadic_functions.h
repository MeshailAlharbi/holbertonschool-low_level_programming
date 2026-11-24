#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - a struct associating a format specifier with a print func
 * @symbol: format specifier symbol
 * @print: pointer to function that prints the corresponding argument
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif 
