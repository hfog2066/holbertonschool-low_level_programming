#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 *struct op - struct operator
 *@op: char.
 *@fun: function print.
 *
 *Description: define struct type.
 */
typedef struct op
{
	char *op;
	void (*fun)(va_list);
} op_t;

void print_number(va_list);
void print_string(va_list);
void print_float(va_list);
void print_char(va_list);

#endif
