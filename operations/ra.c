/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:42:08 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/06/02 18:25:28 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack_data *stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !stack->head || !stack->head->next)
		return ;
	first = stack->head;
	last = stack->head;
	while (last->next)
		last = last->next;
	stack->head = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack_data *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}
