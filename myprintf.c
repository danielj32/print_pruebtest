#include "holberton.h"

void _printf(const char *format, ...)
{
	va_list print;
	int count = 0;

	MyPrint prints[] = {
		{"c", print_character},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_decimal},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_SString},
		{"p", print_address},
		{"r", print_reverse},
		{"R", print_rot13},
		{NULL, NULL}
	};

	struct fsdsdsd flag[] = {

		{"+", f_plus},
		{" ", f_space},
		{NULL, NULL}
	};

	if (!format)
		return (-1);
	va_start(print, format);

	va_end(print);
	return (0);
}

/**
 *caracter - search char
 *@lista: list
 */

void  print_character(va_list lista)
{
	char j = va_arg(arg, int);

	printf("%c", va_arg(lista, int));
}

void integer(va_list lista)
{
	printf("%d", va_arg(lista, int));
}

