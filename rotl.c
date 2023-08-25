#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Pointer to the head of the stack
 * @counter: Line number (unused)
 *
 * This function rotates the stack to the top, moving the bottom element to
 * the top while maintaining the order of the other elements. It doesn't
 * modify the stack if it has less than two elements.
 */
void f_rotl(stack_t **head, unsigned int counter)

{

stack_t *tmp = *head, *aux;

/* Check if the stack is empty or has only one element */
if (*head == NULL || (*head)->next == NULL)

{

return;

}

aux = (*head)->next;
aux->prev = NULL;

/* Traverse the stack to find the last element */
while (tmp->next != NULL)

{

tmp = tmp->next;

}

/* Update pointers to rotate the stack */
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = aux;

}

