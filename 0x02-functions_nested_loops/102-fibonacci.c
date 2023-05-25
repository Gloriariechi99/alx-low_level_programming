/**
 * main - prints ythe first 50 fibonacci
 * numbers starting with 1 and 2
 * numbers are separated by a comma followed by a space
 * Return: Always 0
 */
#include <stdio.h>
int main(void)
{
	long int fib[50];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", fib[i]);
	}
	printf("%ld\n", fib[49]);

	return (0);
}
