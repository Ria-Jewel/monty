#include "monty.h"

/**
 * f_pstr - Print a string starting at the top of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number (not used)
 *
 * This function prints characters from the stack until it encounters
 * a character with a value greater than 127 or less than or equal to 0.
 * It doesn't modify the stack.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
    stack_t *h;
    (void)counter;

    h = *head;
    while (h)
    {
        if (h->n > 127 || h->n <= 0)
        {
            break;
        }
        printf("%c", h->n);
        h = h->next;
    }
    printf("\n");
}

