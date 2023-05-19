/**
* main - main function
* Return: Always 0
*/
#include <stdio.h>

int main(void)
{
	char lower_UpperCase;

	for (lower_UpperCase = 'a'; lower_UpperCase <= 'z'; lower_UpperCase++)
		putchar(lower_UpperCase);

	for (lower_UpperCase = 'A'; lower_UpperCase <= 'Z'; lower_UpperCase++)
		putchar(lower_UpperCase);

	putchar('\n');

	return (0);
}
