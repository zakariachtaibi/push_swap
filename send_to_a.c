#include "push_swap.h"

static int is_in_first_half(t_stack_data *stack_b, int index)
{
    t_stack *tmp_b;
    int len;

    tmp_b = stack_b->head;
    len = stack_b->size / 2;
    while (len > 0)
    {
        if (tmp_b->index == index)
            return 1;
        tmp_b = tmp_b->next;
        len--;
    }
    return 0;
}

static int last_index(t_stack *stack)
{
    t_stack *tmp;

    tmp = stack;
    while (tmp->next)
        tmp = tmp->next;
    return tmp->index;
}

static void check_first(t_stack_data *stack_a, t_stack_data *stack_b, int *flag)
{
    while ((stack_b->head->index != stack_a->head->index - 1) && stack_b->size > 0)
    {
        if ((stack_b->head->index > last_index(stack_a->head)) || !*flag)
        {
            pa(stack_a, stack_b);
            ra(stack_a);
            *flag = 1;
        }
        else
        {
            rb(stack_b);
        }
    }
    pa(stack_a, stack_b);
}

static void check_second(t_stack_data *stack_a, t_stack_data *stack_b, int *flag)
{
    while ((stack_b->head->index != stack_a->head->index - 1) && stack_b->size > 0)
    {
        if ((stack_b->head->index > last_index(stack_a->head)) || !*flag)
        {
            pa(stack_a, stack_b);
            ra(stack_a);
            *flag = 1;
        }
        else
        {
            rrb(stack_b);
        }
    }
    pa(stack_a, stack_b);
}

int search_max(t_stack_data *stack_a)
{
    t_stack *tmp;
    int max;

    tmp = stack_a->head;
    max = tmp->index;
    while (tmp)
    {
        if (tmp->index > max)
            max = tmp->index;
        tmp = tmp->next;
    }
    return max;
}

void send_to_stack_a(t_stack_data *stack_a, t_stack_data *stack_b)
{
    int flag;

    flag = 0;
    while (stack_b->size > 0)
    {
        if (is_in_first_half(stack_b, stack_a->head->index - 1))
            check_first(stack_a, stack_b, &flag);
        else
            check_second(stack_a, stack_b, &flag);
        while (last_index(stack_a->head) == stack_a->head->index - 1)
            rra(stack_a);
        if (search_max(stack_a) == last_index(stack_a->head))
            flag = 0;
    }
}