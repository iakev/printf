#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
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
#endif
