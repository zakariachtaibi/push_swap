#include "../push_swap.h"

void rra(t_stack_data *stack_a)
{
    t_stack *last;
    t_stack *second_last;

    last = stack_a->head;
    while (last->next->next != NULL)
        last = last->next;
    second_last = last->next;
    last->next = NULL;
    second_last->next = stack_a->head;
    stack_a->head = second_last;
}