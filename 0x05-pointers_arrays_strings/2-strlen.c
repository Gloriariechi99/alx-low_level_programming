#include "main.h"
/**
* _strlen - return the length of a string
* @s: string whose length is to be determined
* Return: length of sting s
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
