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

int main(int ac, char **av)
{
    t_stack_data stack_a;
    t_stack_data stack_b;

    stack_a.head = NULL;
    stack_a.size = 0;
    stack_b.head = NULL;
    stack_b.size = 0;
    if (ac >= 2)
    {
        while (--ac > 0)
        {
            if (!ft_fill_stack(&stack_a, ft_split(av[ac], ' ')))
                exit(1);
        }
        index_stack(stack_a.head);
        if (is_stack_sorted(stack_a.head))
        {
            ft_clear_stack(&stack_a);
            exit(0);
        }
        sort(&stack_a, &stack_b);
        ft_clear_stack(&stack_a);
        ft_clear_stack(&stack_b);
    }
    return (0);
}