#include "../push_swap.h"

void sb(t_stack_container *stack_b)
{
    if (stack_b->size < 2)
        return;
    t_stack *first = stack_b->head;
    t_stack *second = first->next;
    first->next = second->next;
    second->next = first;
    stack_b->head = second;
}