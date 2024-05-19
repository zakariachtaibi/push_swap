#include "push_swap.h"

void  sort(t_stack_data *stack)
{
    if (stack->size == 2)
        sa(stack);
    else if (stack->size == 3)
        sort_three(stack);
}