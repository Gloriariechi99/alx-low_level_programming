#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*argstostr - concatenates of arguments to string
*@ac: argument counts
*@av: array of values
*Return: Concatenated string if it exists or NULL
*/


char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *c;

	i = j = k = l = 0;
	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			l++;
		}
		l++;
	}
	c = (char *)  malloc(sizeof(char) * (l + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			*(c + k++) = *(av[i] + j);
		}
		*(c + k++) = '\n';
	}

	return (c);
}
