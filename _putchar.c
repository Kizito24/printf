#include "main.h"

/**
 * _putchar - writes characters to standard output
 * @c: character to be written.
 *
 * Return: 1 when successful.
 * -1 when it fails, and errno is set apropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
