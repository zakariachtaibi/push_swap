/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:43:04 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:43:04 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int min_value(t_stack *stack)
{
    int min;
    t_stack *current;
        
    min = stack->data;
    current = stack->next;
    while (current != NULL)
    {
        if (current->data < min)
            min = current->data;
        current = current->next;
    }
    return min;
}

void sort_three(t_stack_data *stack)
{
    t_stack *tmp;
    int a;
    int b;
    int c;

    tmp = stack->head;
    a = tmp->data;
    b = tmp->next->data;
    c = tmp->next->next->data;
    if (a > b && b < c && a < c)
        sa(stack);
    else if (a > b && b > c)
    {
        sa(stack);
        rra(stack);
    }
    else if (a > b && b < c && a > c)
        ra(stack);
    else if (a < b && b > c && a < c)
    {
        sa(stack);
        ra(stack);
    }
    else if (a < b && b > c && a > c)
        rra(stack);
}

void sort_four(t_stack_data *stack)
{
    t_stack_data *stack_b;
    t_stack *tmp;
    int min;

    stack_b = init_stack_data();
    tmp = stack->head;
    min = min_value(stack->head);
    while (stack->size > 3)
    {
        if (tmp->data == min)
        {
            pb(stack_b, stack);
            tmp = stack->head;
        }
        else
        {
            ra(stack);
            tmp = stack->head;
        }
    }
    sort_three(stack);
    pa(stack, stack_b);
    ft_clear_stack(stack_b);
}

void sort_five(t_stack_data *stack)
{
    t_stack_data *stack_b;
    t_stack *tmp;
    int min;

    stack_b = init_stack_data();
    tmp = stack->head;
    min = min_value(stack->head);
    while (stack->size > 4)
    {
        if (tmp->data == min)
        {
            pb(stack_b, stack);
            tmp = stack->head;
        }
        else
        {
            ra(stack);
            tmp = stack->head;
        }
    }
    sort_four(stack);
    pa(stack, stack_b);
    ft_clear_stack(stack_b);
}