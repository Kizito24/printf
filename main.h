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
	int (*f)();
}print_t;

int _putchar(char c);
int printf_char(va_list val);
int printf_int(va_list val);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_dec(va_list args);
int printf_string(va_list val);
int printf_37(void);
int _strlen(char *s);
int _strlenc(const char *s);

#endif
