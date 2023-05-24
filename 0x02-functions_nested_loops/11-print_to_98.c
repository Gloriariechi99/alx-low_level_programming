/**
 * print_to_98 - prints all natural numbers
 * from n to 98  followed by a new line
 * @n: starting number
 * Numbers should be printed in order
 * The first printed number should be the number
 * passed to your function
 * The last printed number should be 98
 */
#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	if (n > 97)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
