#include "main.h"
/**
* _puts - prints a string folowed by a new line to stdout
* @str: string to print
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
	_putchar('0');
}
