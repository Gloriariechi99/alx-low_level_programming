/**
 * _isdigit - checks for a digit 0 though 9
 * @c: integer to be checked
 * Return: 1 if digit otherwise 0
 */
#include "main.h"
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
