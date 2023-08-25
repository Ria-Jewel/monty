#include "monty.h"

/**
 * addnode - Adds a new node to the head of the stack.
 * @head: A pointer to the head of the stack.
 * @n: The value to be stored in the new node.
 *
 * Description:
 * This function creates a new node with the given value and adds it to the
 * head of the stack. It also updates the previous pointer of the existing
 * head node if it exists.
 */
void addnode(stack_t **head, int n)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
exit(EXIT_FAILURE);
}
if (aux)
prev = new_node;
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
*head = new_node;
}

