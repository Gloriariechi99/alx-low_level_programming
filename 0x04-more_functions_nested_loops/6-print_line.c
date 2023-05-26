/**
 * print_line - function that draws a straight line in the terminal
 * using only _putchar function to prinyt
 * @n: number of times the character is to be printed
 * should end with a new line
 * if n is 0 or less the function prints only \n
 */
#include "main.h"
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
