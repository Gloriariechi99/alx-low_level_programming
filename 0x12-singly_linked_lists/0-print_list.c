/**
 * print_list - function that prints all the elements of a list_t list
 * @h: parameter of the function that points tothe constant structure
 * list_t that trepresents the head of the linked list
 * Return: Number of nodes
 */
#include "lists.h"
size_t print_list(const list_t *h)
{

	size_t num = 0;
	const list_t *cursor = h;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
			printf("[%d] %s\n", cursor->len, cursor->str);
		else
			printf("[0] (nil)\n");
		num = num + 1;
		cursor = cursor->next;
	}

	return (num);
}
