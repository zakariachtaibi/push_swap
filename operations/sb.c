#include "../push_swap.h"

void sb(t_stack_data *stack_b)
{
    t_stack *first;
    t_stack *second;

    if (stack_b == NULL)
		return ;
    first = stack_b->head;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stack_b->head = second;
}