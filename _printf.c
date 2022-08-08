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
	if (ca != '\0')
	{
		_putchar(ca);
		(*count)++;
	}
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
	if (str != NULL)
	{
		while (*str)
		{
			_putchar(*str);
			(*count)++;
			str += 1;
		}
	}
}

