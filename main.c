#include <stdio.h>
#include "holberton.h"
#include <limits.h>
int main(void)
{
	char *s = "Hello World";
	int len1;
	int len2, i, j;
	/*printf("%");*/
	_printf("%");
	_printf("\n");
	/* Test format string is NULL - no output expected */
	len1 = printf(NULL);
	len2 = _printf(NULL);
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test parameter string is NULL - expect print (null) */
/*	len1 = printf("Null is %s\n", NULL);
	len2 = _printf("Null is %s\n", NULL);
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test with empty string */
/*	len1 = printf("Nothing should be after this statement: %s\n", "");
	len2 = _printf("Nothing should be after this statement: %s\n", "");
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test if input is a string directly entered */
/*	len1 = printf("Test string: %s\n", "HELLO");
	len2 = _printf("Test string: %s\n", "HELLO");
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test input of a string variable */
/*	len1 = printf("Test string variable: %s\n", s);
	len2 = _printf("Test string variable: %s\n", s);
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test input of string variable in middle of a string */
/*	len1 = printf("Test %s string\n", s);
	len2 = _printf("Test %s string\n", s);
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test input of special characters */
/*	len1 = printf("%s Test\\\\ string\n", s);
	len2 = _printf("%s Test\\\\ string\n", s);
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test %c */
/*	len1 = printf("%cello%c%c%c%c\n", 'H','H','o','l','a');
	len2 = _printf("%cello%c%c%c%c\n", 'H','H','o','l','a');
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test %% */
/*	len1 = printf("print %%%%%correctly?\n",'C');
	len2 = _printf("print %%%%%correctly?\n",'C');
	printf("std return: %d, _printf return: %d\n", len1, len2);
	/* Test % and other character */
/*	len1 = printf("print %r\n");
	len2 = _printf("print %r\n");
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test % , space and format */
/*
	len1 = printf("print % c % s\n", 'H', s);
	len2 = _printf("print % c % s\n", 'H', s);
	printf("std return: %d, _printf return: %d\n", len1, len2); */
   	/* integers */
/**	i = (int)INT_MAX;
	j = (int)INT_MIN;
	len1 = printf("Hello World\n");
	len2 = _printf("Hello World\n");
	_printf("Length:[%d, %i]\n", len1, len1);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("INT_MAX:[%d]\n", i);
	printf("INT_MAX:[%d]\n", i);
	_printf("INT_MIN:[%d]\n", j);
*	printf("INT_MIN:[%d]\n", j);
*/
	return (0);

}
