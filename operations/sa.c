/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:42:24 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/19 23:42:24 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_stack_data *stack_a)
{
    t_stack *first;
    t_stack *second;

    if (stack_a == NULL)
		return ;
    first = stack_a->head;
    second = first->next;
    first->next = second->next;
    second->next = first;
    stack_a->head = second;
}