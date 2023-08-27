#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * This function adds the values of the top two elements of the stack and
 * replaces the second element with the result. It doesn't modify the stack
 * if it has less than two elements.
 */
void f_add(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    h = *head;

    /* Calculate the length of the stack*/
    while (h)
    {
        h = h->next;
        len++;
    }

    /* Check if the stack has less than 2 elements*/
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    h = *head;

    /* Calculate the sum of the top two elements*/
    aux = h->n + h->next->n;
    h->next->n = aux;

    /* Update the head to remove the top element*/
    *head = h->next;

    /* Free the previous top element*/
    free(h);
}

