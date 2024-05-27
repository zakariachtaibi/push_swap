/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:20:25 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/02 13:40:04 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(t_stack *stack)
{
	int	num;

	num = 0;
	while (stack)
	{
		stack = stack->next;
		num++;
	}
	return (num);
}

t_stack_data *init_stack_data(void)
{
    t_stack_data *stack;

    stack = (t_stack_data *)malloc(sizeof(t_stack_data));
    if (stack == NULL)
        return (NULL);
    stack->head = NULL;
    stack->size = 0;
    return (stack);
}

void ft_clear_stack(t_stack_data *stack)
{
    t_stack *current = stack->head;
    t_stack *next;
    
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    stack->head = NULL;
    stack->size = 0;
}