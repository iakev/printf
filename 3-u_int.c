#include "main.h"

/**
 * _print_o - converts an unsigned interger to octal and displays
 * the conversion
 * @o: va_list variable argument unsigned interger.
 * @count: interger pointer to number of characters printed by _printf
 */
void _print_o(va_list o, unsigned int *count)
{
	unsigned int numbers, counter = 0;
	int i, buf[64];

	numbers = va_arg(o, unsigned int);
	if (numbers == 0)
	{
		(*count) += _putchar(numbers + '0');
	}
	while (numbers != 0)
	{
		buf[counter] = numbers % 8;
		numbers /= 8;
		counter++;
	}
	for (i = (counter - 1); i >= 0; i--)
	{
		(*count) += _putchar(buf[i] + '0');
	}
}
