/**
 * set_string - sets the value of a pointer to a char
 * @s: content is to be copied
 *@to: string
 *Return: void
 */
#include "main.h"
void set_string(char **s, char *to)
{
	*s = to;
}
