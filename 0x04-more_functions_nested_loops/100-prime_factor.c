/**
 * main - prints the largest prime facter of the number
 * 612852475143, followed by a new line
 * Return: Always 0
 */
#include <stdio.h>
#include <math.h>
int main(void)
{
	long int n;
	long int largest;
	long int i;

	n = 612852475143;
	largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}

	if (n > 2)
		largest = n;

	printf("%ld\n", largest);

	return (0);
}
