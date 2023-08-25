#include "monty.h"

/**
 * f_mod - Computes the remainder of the division of the second
 * top element of the stack by the top element of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number.
 *
 * Return: No return value.
 */
void f_mod(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head;

/* Calculate the length of the stack */
while (h)
{
h = h->next;
len++;
}

/* Check if the stack has less than 2 elements */
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

h = *head;

/* Check if the top element of the stack is zero */
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

aux = h->next->n % h->n;

/* Update the next element with the remainder of the division */
h->next->n = aux;
free(h);
}
