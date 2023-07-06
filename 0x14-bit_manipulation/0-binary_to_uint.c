#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that
 * is not 0 or 1 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int glo;
	int length;
	int base_two;

	if(!b)
		return (0);

	glo = 0;

	for (length = 0; b[length] != '\0'; length++)
		;
	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		
		if (b[length] & 1)
		{
			glo = glo + base_two;
		}

	}

	return (glo);
}
