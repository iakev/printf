#include "main.h"

/**
 * _print_c - Display a character to the stdout
 * @c: va-list type holding the character argument
 * @count: integer pointer to the number of characters printed by _printf
 * Return: Nothing
 */
void _print_c(va_list c, unsigned int *count)
{
	char ca;

	ca = va_arg(c, int);
	_putchar(ca);
	(*count)++;
}

/**
 * _print_s - Display a string to the stdout
 * @s: va-list type holding the string argument
 * @count: integer pointer to the number of characters printed by _printf
 * Return: Nothing
 */
void _print_s(va_list s, unsigned int *count)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		_putchar(*str);
		(*count)++;
		str += 1;
	}

}

/**
 * _print_n - Prints a newline character
 * @c: The backslash
 * @d: The 'n' in the backslash
 * @i: Pointer to the while loop iterator in printf
 */
void _print_n(char c, char d, unsigned int *i)
{
	if (c == '\\')
	{
		if (d == 'n')
		{
			_putchar('\n');
			(*i) += 2;
		}
	}
}

/**
 * _printf - main function to print according to a format
 * @format: character strings composed of 0 or more directives
 *		and format specifiers
 * Return: Number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	unsigned int i, j, count;
	va_list ap;
	prnt_t prnts[] = {
		{"c", _print_c},
		{"s", _print_s},
		{NULL, NULL}
	};

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format && format[i] != '\0')
	{
		_print_n(format[i], format[i + 1], &i);
		if (format[i] != '%' || (format[i] == '%' && format[i + 1] == '%'))
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		else
		{
			if (format[i] == '%')
			{
				j = 0;
				while (prnts[j].c != NULL)
				{
					if (format[i + 1] == *prnts[j].c)
					{
						prnts[j]._puts(ap, &count);
						break;
					}
					j++;
				}
				i += 2;
			}
		}
	}
	va_end(ap);
	return (count);
}
