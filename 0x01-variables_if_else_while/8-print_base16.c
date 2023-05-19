/**
* main - program that prints all the numbers of base 16 in lowercase
* followed by a new line
* Return: 0
*/
#include <stdio.h>
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
