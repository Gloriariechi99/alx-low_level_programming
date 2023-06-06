/**
 * puts2 - prints every othere character of a string
 * starting with the first character followed by a new line
 * @str: string to be printed
 */
#include "main.h"
#include <stdio.h>
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
		return;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i = i + 2;
	}
	printf("\n");
}
