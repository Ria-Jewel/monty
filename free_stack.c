#include "monty.h"

/**
 * free_stack - Frees a doubly linked list.
 * @head: A pointer to the head of the stack.
 *
 * Description:
 * This function frees the memory allocated for a doubly linked list.
 * It starts from the head and iterates through the list, freeing each node.
 */
void free_stack(stack_t *head)
{
stack_t *aux;

aux = head;
while (head)

{

aux = head->next;
free(head);
head = aux;

}
}

