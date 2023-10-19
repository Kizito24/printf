#include "main.h"

/**
 * printf_oct - a function that prints octal numbers to stdout.
 * @oct: the integer to be converted to octal.
 * Return: the counter
 */
int printf_oct(va_list oct)
{
	int *arr, num1, counter;
	unsigned int num2, num3;

	num2 = va_arg(oct, unsigned int), num3 = num2;

	while (num2 / 8 != 0)
	{
		num2 /= 8;
		counter++;
	}
	counter++;

	arr = malloc(sizeof(int) * counter);

	for (num1 = 0; num1 < counter; num1++)
	{
		arr[num1] = num3 % 8;
		num3 /= 8;
	}

	for (num1 = counter - 1; num1 >= 0; num1--)
	{
		_putchar(arr[num1] + '0');
	}
	free(arr);
	return (counter);
}
