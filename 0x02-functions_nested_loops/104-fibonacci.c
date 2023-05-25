/**
 * main - prints the first 98 fibonacci numbers
 * starting with 1 and 2 followed by a space
 * The numbers are separated by commas followed by a space
 * Return: Always 0
 */
#include <stdio.h>
int main(void)
{
	long int first_term = 1;
	long int second_term = 2;
	int count = 2;

	printf("%ld, %ld, ", first_term, second_term);

	while (count < 98)
	{
		long int fib_num = first_term + second_term;

		printf("%ld", fib_num);

		if (count != 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		first_term = second_term;
		second_term = fib_num;
		count++;
	}
	return (0);
}
