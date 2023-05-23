/**
 * _islower - checks if the character c is in lowercase
 * @c: the character that is to be checked
 * Return: 1 if c is lowercase otherwise returns 0
 */
#include "main.h"
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
