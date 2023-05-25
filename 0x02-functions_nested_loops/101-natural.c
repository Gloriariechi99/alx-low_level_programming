/**
 * main - prints sum of multiples of
 * 3 and 5 below 1024
 * Return: Always 0
 */
#include <stdio.h>
int main(void)
{
	int below = 1024;
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{

			sum = sum + i;
		}
	}
	printf("The sum is %d\n", sum);

	return (0);
}
