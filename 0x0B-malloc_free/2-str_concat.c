#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*str_concat - function that concatenate two strings
*@s1: First string
*@s2: Second string
*Return: It returns null on failure or the concatenated string on success
*/


char *str_concat(char *s1, char *s2)
{
	int i, j, k, counter, counter2;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	k = i + j + 1;
	c = (char *) malloc(sizeof(char) * k);

	if (c == NULL)
		return (NULL);
	for (counter = 0; *(s1 + counter) != '\0'; counter++)
		*(c + counter) = *(s1 + counter);
	for (counter2 = 0; *(s2 + counter2) != '\0'; counter2++)
	{
		*(c + counter) = *(s2 + counter2);
		counter++;
	}
	return (c);
}
