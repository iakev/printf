#include "main.h"
/**
 * _check_INT_MIN - checks and displays the INT_MIN macro
 * @numbers: number to be checked if it's INT_MIN
 * @count: integer pointer to the number of integers printed by _printf
 * Return: Nothing
 */

void _check_INT_MIN(int numbers, unsigned int *count)
{
	int temp, div;
	unsigned int i, counter = 0;

	if (numbers == INT_MIN)
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
		div = -1 * (numbers / temp);
		(*count) += _putchar(div + '0');
		temp /= 10;
		while (temp != 1)
		{
			div = -1 * (numbers / temp);
			(*count) += _putchar((div % 10) + '0');
			temp /= 10;
		}
		(*count) += _putchar((-1 * (numbers % 10)) + '0');
	}
}

/**
 * _print_d - prints base 10 digits
 * @d: va_list holding the values of the digits
 * @count: integer pointer to the number of integers printed by _printf
 * Return: Nothing
 */
void _print_d(va_list d, unsigned int *count)
{
	int numbers, temp, div;
	unsigned int i, counter = 0;

	numbers = va_arg(d, int);
	if (numbers < 0)
	{
		(*count) += _putchar('-');
		if (numbers == INT_MIN)
		{
			_check_INT_MIN(numbers, count);
		}
		numbers *= -1;
	}
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
	else if (numbers != INT_MIN)
		(*count) += _putchar(numbers + '0');
}
