/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Return: 1 if success, -1 on error
 */
#include "main.h"
int _putchar(char c)
{
	return(write(1, &c, 1));
}
