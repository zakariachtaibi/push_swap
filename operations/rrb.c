#include "../push_swap.h"

void rrb(t_stack_data *stack_b)
{
    t_stack *last;
    t_stack *second_last;

    last = stack_b->head;
    while (last->next->next != NULL)
        last = last->next;
    second_last = last->next;
    last->next = NULL;
    second_last->next = stack_b->head;
    stack_b->head = second_last;
}