/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of times the character \ is to be printed
 * using only _putchar and each diagonal shoul end with a nwe line
 * if n is 0 or less, the function should only print \n
 */
#include "main.h"
void print_diagonal(int n)
{
	int row;
	int space;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
				_putchar(' ');
			_putchar('\\');

			if (row == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
