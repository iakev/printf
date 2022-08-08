#include <unistd.h>

/**
 * _putchar - displays a single character 'c' to the stout stream
 * @c: The character to be displayed
 * Return: On success, number of bytes written or -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
