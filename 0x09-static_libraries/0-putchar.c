/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 * Return: 1 if success, -1 on error
 */
#include <unistd.h>
#include <stdio.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
