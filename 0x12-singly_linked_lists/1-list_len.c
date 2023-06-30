/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number = number + 1;
		h = h->next;
	}

	return (number);
}
