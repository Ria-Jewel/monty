#include "monty.h"

/**
 * f_queue - Switches to queue mode.
 * @head: Pointer to the head of the stack
 * @counter: Line number (unused)
 *
 * This function switches the stack mode to queue mode.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a new node to the tail of the stack.
 * @head: Pointer to the head of the stack
 * @n: Value to be added to the new node
 *
 * This function adds a new node to the tail of the stack in queue mode.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}

