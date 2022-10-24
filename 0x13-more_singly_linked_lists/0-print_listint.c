#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: listint_t to prints
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
		unsigned int i = 0;
		const listint_t *new_node = h;

		       	for (; new_node; new_node = new_node->next)
				{
printf("%d\n", new_node->n);
	i++;
				}
return (i);
}
