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
void _print_x(va_list x, unsigned int *count)
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

	numbers = va_arg(x, unsigned int);
	if (numbers == 0)
	{
		(*count) += _putchar(numbers + '0');
	}
	while (numbers != 0)
	{
		buf[counter] = numbers % 16;
		numbers /= 16;
		counter++;
	}
	for (j = (counter - 1); j >= 0; j--)
	{
		if (buf[j] <= 9)
			(*count) += _putchar(buf[j] + '0');
		else
		{
			i = 0;

			while (printx[i].c != 'g')
			{
				if (buf[j] == printx[i].n)
					(*count) += _putchar(printx[i].c);
				i++;
			}
		}
	}
}
/**
 * _print_X - converts unsigned integer to hexadecimals and
 *		displays it in capital letters
 * @X: va_list unsigned integer argument
 * @count: pointer to the number of characters printed by _printf
 * Return: Nothing
 */
void _print_X(va_list X, unsigned int *count)
{
	unsigned int numbers, counter = 0;
	int i, j, buf[64];
	hex printx[] = {
		{'A', 10},
		{'B', 11},
		{'C', 12},
		{'D', 13},
		{'E', 14},
		{'F', 15},
		{'g', 0}
	};

	numbers = va_arg(X, unsigned int);
	if (numbers == 0)
	{
		(*count) += _putchar(numbers + '0');
	}
	while (numbers != 0)
	{
		buf[counter] = numbers % 16;
		numbers /= 16;
		counter++;
	}
	for (j = (counter - 1); j >= 0; j--)
	{
		if (buf[j] <= 9)
			(*count) += _putchar(buf[j] + '0');
		else
		{
			i = 0;

			while (printx[i].c != 'g')
			{
				if (buf[j] == printx[i].n)
					(*count) += _putchar(printx[i].c);
				i++;
			}
		}
	}
}

/**
 * _print_u - prints non negative digits
 * @u: va_list holding the values of the digits
 * @count: integer pointer to the number of integers printed by _printf
 * Return: Nothing
 */
void _print_u(va_list u, unsigned int *count)
{
	unsigned int numbers, temp, div;
	unsigned int i, counter = 0;

	numbers = va_arg(u, unsigned int);

	if (numbers <= 0)
		(*count) += _putchar(numbers + '0');
	if (numbers > 9)
	{
		temp = numbers;
		while (temp != 0)
		{
			temp /= 10;
			counter++;
		}
		temp = 1;
		for (i = 1; i < counter; i++)
		{
			temp *= 10;
		}
		div = numbers / temp;
		(*count) += _putchar(div + '0');
		temp /= 10;
		while (temp != 1)
		{
			div = numbers / temp;
			(*count) += _putchar((div % 10) + '0');
			temp /= 10;
		}
		(*count) += _putchar((numbers % 10) + '0');
	}
}
