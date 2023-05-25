/**
 * main - prints sum of multiples of
 * 3 and 5 below 1024
 * Return: Always 0
 */
#include <stdio.h>
int main(void)
{
	int sum3 = 0;
	int sum = 0;
	int sum5 = 0;
	int i;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		}
		else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
		sum = sum3 + sum5;
	}
	printf("The sum is %d\n", sum);

	return (0);
}
