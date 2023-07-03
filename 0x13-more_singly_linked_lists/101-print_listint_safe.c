#include "lists.h"

/**
 * print_listint_safe - safely prints a linked list
 * @head: list of the tupe of listint_t to be printed
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int differ;

	while (head)
	{
		differ = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (differ > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
