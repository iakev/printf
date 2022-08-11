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

/**
 * _print_x - converts unsigned integer to hexadecimals and
 *		displays it in small letters
 * @x: va_list unsigned integer argument
 * @count: pointer to the number of characters printed by _printf
 * Return: Nothing
 */

void _print_x(va_list m, unsigned int *count)
{
	unsigned int numbers, counter = 0;
	int i, j, buf[64];
	hex printx[] = {
		{'a', 10},
		{'b', 11},
		{'c', 12},
		{'d', 13},
		{'e', 14},
		{'f', 15},
		{'g', 0}
	};
	
	numbers = va_arg(m, unsigned int);
	if (numbers == 0)
	{
		(*count) += _putchar(numbers + '0');
	}
	while (numbers !=0 )
	{
		buf[counter] = numbers % 16;
		numbers /= 16;
		counter++;
	}
	for (j = (counter - 1); j >= 0; j--)
	{
		if (buf[j] <= 9)
		{
			(*count) += _putchar(buf[j] + '0');
		}
		else
		{
			i = 0;

			while (printx[i].c != 'g')
			{
				if (buf[j] == printx[i].n)
				{
					(*count) += _putchar(printx[i].c);
				}
				i++;
			}
		}
	}
}
