/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 if success, 1 if error
 */
#include <stdio.h>
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
