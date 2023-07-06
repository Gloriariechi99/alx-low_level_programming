#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index, starting from 0 of the bit you want to set
 * @n: pointer to an unsigned long int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = i << index;
	*n = (*n | i);

	return (1);
}
