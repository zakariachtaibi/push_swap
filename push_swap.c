/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:38:10 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/10 14:57:30 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp && tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	if (ac >= 2)
	{
		stack_a = check_args(ac, av);
		if (is_stack_sorted(stack_a) == 1)
		{
			ft_clear_stack(&stack_a);
			return (0);
		}
	}
	else
		ft_putstr_fd("Error\n", 2);
	return (0);
}