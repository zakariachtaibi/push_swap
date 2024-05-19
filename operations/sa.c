#include "../push_swap.h"

void sa(t_stack_container *stack_a)
{
    if (stack_a->size < 2)
        return;
    t_stack *first = stack_a->head;
    t_stack *second = first->next;
    first->next = second->next;
    second->next = first;
    stack_a->head = second;
}