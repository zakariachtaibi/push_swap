/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:38:10 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/16 09:59:29 by zchtaibi         ###   ########.fr       */
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

void printNode(t_stack *node)
{
    while (node)
    {
        printf(" %d ->", node->data);
        node = node->next;
    }
    printf("null\n");
}

int	main(int ac, char **av)
{
	t_stack *stack_a;
	// t_stack *stack_b;

	// stack_b = NULL;
	stack_a = NULL;
	if (ac >= 2)
	{
		while (--ac > 0)
			if (!ft_fill_stack(&stack_a, ft_split(av[ac], ' ')))
				exit (0);
		printNode(stack_a);
		if (is_stack_sorted(stack_a) == 1)
		{
			ft_clear_stack(&stack_a);
			printf("Stack is sorted\n");
			exit (0);
		}
		
	}
	return (0);
}