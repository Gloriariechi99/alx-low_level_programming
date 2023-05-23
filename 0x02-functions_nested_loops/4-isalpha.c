/**
* _isalpha - checks for alphabetic character
* @c: is the character to be checked
* Return: 1 for success otherwise 0
*/
#include "main.h"
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
