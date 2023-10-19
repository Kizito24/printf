#include "main.h"

/**
 * print_char - prints a char to stdout.
 * @val: argument list from which char will be printed;
 *
 * Return: 1 when succesful
 */

int printf_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);

	return (1);
}
