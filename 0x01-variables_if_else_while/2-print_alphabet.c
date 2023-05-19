/**
* main - main function
* Return: 0
*/
#include <stdio.h>
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);

	putchar('\n');

	return (0);
}
