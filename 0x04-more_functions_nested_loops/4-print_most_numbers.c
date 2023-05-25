/**
 * print_most_numbers - prints numebrs between 0 and 9
 * using _putchar except 2 and 4
 */
#include "main.h"
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
