/**
* _puts - prints a string folowed by a new line to stdout
* @str: string to print
*/
#include "main.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
