#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: long unsigned int
 * Return: value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; n >>= 1, m++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}
	return (-1);
}
