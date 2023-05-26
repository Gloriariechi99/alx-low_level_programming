/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * using _putchar followed by a new line
 */
#include "main.h"
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

