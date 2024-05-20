/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:43:08 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:43:08 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sort(t_stack_data *stack)
{
    if (stack->size == 2)
        ra(stack);
    else if (stack->size == 3)
        sort_three(stack);
    else if (stack->size == 4)
        sort_four(stack);
    else if (stack->size == 5)
        sort_five(stack);
}