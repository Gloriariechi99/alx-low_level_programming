/**
 * print_last_digit - function that prints the last digit of a number
 * @num: number whose last digit is to be printed
 * Return: 0
 */
#include "main.h"
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = -num;
	last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
