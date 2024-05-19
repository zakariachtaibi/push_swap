#include "../push_swap.h"

void pb(t_stack_data *stack_b, t_stack_data *stack_a)
{
    t_stack *top_a;

    if (stack_a->size == 0)
        return;
    top_a = stack_a->head;
    stack_a->head = top_a->next;
    stack_a->size--;
    top_a->next = stack_b->head;
    stack_b->head = top_a;
    stack_b->size++;
}