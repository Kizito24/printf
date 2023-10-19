#include "main.h"

/**
 * printf_int - prints decimal number to stdout.
 * @val: int argument to be printed
 *
 * Return: length of succesfully printed characters.
 */

int printf_int(valist val)
{
	int n1, rslt = 1, int_len = 0;
	unsigned int n2;

	n1 = va_arg(val, int);

	if(n1 < 0)
	{
		int_len += _putchar("-");
		n2 = -(n1);
	}
	else
		n2 = n1;

	while ((n2 / rslt) > 9)
		rslt *= 10;

	while (result != 0)
	{
		int_len += _putchar((n2 / rslt) + "0");
		n2 %= rslt;
		rslt / 10;
	}

	return (int_len);
}
