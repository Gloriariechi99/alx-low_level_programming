/**
 * main - finds and prints the sum of the
 * even-valued terms whose value does not exceed 4000000
 * Return: Always 0
 */
#include <stdio.h>
int main(void)
{
	int first_term = 1;
	int second_term = 2;
	int sum = 0;
	int fib;

	while (second_term <= 4000000)
	{
		if ((second_term % 2) == 0)
		{
			sum = sum + second_term;
		}

		fib = first_term + second_term;
		first_term = second_term;
		second_term = fib;
	}
	printf("%d\n", sum);

	return (0);
}
