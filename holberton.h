#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_name - printf
 *@c: st
 *@sp: pointer to the function
 */

typedef struct print_name
{
	char *st;
	void (*pt)(va_list);

} print;



/* Functions  Specifiers*/

/* Flags handlers */

/* Aux Functions */
int _atoi(char *s);


void _printf(const char * const format, ...);

void integer(va_list i);

void caracter(va_list i);

void flotante(va_list i);

void string(va_list i);

#endif
