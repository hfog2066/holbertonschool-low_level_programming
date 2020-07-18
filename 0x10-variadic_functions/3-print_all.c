#include "variadic_functions.h"

/**
 *print_char - c file
 *@valist: argument
 *
 *Return: 0.
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 *print_number - c file
 *@valist: argument.
 *
 *Return:  0.
 */
void print_number(va_list valist)
{
	printf("%i", va_arg(valist, int));
}
/**
 *print_float - c file
 *@valist: argument.
 *
 *Return: 0.
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 *print_string - template c file
 *@valist: argument.
 *
 *Return: 0.
 */
void print_string(va_list valist)
{
	char *string = va_arg(valist, char *);

	if (!string)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}
/**
 *print_all - print all formats.
 *@format: character format.
 *
 *Return: 0.
 */
void print_all(const char * const format, ...)
{
	op_t list_op[] = {
		{"c", print_char},
		{"i", print_number},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	char *t_format = (char *) format;
	char *separator = "";
	va_list valist;
	int i = 0;

	va_start(valist, format);

	while (format && *t_format)
	{
		i = 0;

		while (list_op[i].op)
		{
			if (list_op[i].op[0] == *t_format)
			{
				printf("%s", separator);
				list_op[i].fun(valist);
				separator = ", ";
			}
			i++;
		}
		t_format++;
	}

	va_end(valist);
	printf("\n");
}
