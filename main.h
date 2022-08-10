#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
int _putchar(char c);

/**
 * struct prnt - flag / function object
 * @c: flag
 * @_puts: function pointer
 */

typedef struct prnt
{
	char *c;
	void (*_puts)(va_list, unsigned int *);
} prnt_t;

void _print_s(va_list, unsigned int *);
void _print_c(va_list, unsigned int *);
int _printf(const char *format, ...);
void _print_n(char c, char d, unsigned int *i);
void check_specifiers(va_list, char, char, unsigned int *, unsigned int *);
void _print_d(va_list d, unsigned int *count);
void _print_b(va_list b, unsigned int *count);
void _check_INT_MIN(int numbers, unsigned int *count);
void _print_o(va_list, unsigned int*);
#endif
