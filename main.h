#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * strct pritn_type - matches the conversion specifiers for printf.
 * @type: pointer to the specifying char i.e i, c, s, d.
 * @f: pointer to the function for the conversion specifier.
 *
 */
typedef struct print_type
{
	char *type;
	int (*f)(valist);
}print_t;

int _putchar(char c);
int print_char;

#endif
