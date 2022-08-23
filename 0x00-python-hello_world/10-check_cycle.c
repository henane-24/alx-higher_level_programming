#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *rubbit, *turtle;

	if (list == NULL || list->next == NULL)
		return (0);

	rubbit = list->next;
	turtle = list->next->next;

	while (rubbit && turtle && turtle->next)
	{
		if (rubbit == turtle)
			return (1);

		rubbit = rubbit->next;
		turtle = turtle->next->next;
	}

	return (0);
}
