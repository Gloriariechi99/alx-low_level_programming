/**
 * print_triangle - prints a traingle followed by a new line
 * using only _putchar
 * @size: the size of the triangle
 * if size is 0 or less the function prrints a new line
 * using the character # to print the triangle
 */
#include "main.h"
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
