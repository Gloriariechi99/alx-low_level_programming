/**
* main - program that prints all possible combinations
* of single-digit numbers
* Return: Always 0
*/
#include <stdio.h>
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
			if (number == 9)
				continue;

			putchar(',');
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
