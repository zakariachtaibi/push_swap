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

void printNode(t_stack_container *stack_container)
{
    t_stack *node = stack_container->head;
    while (node)
    {
        printf("value: %d, index: %d\n", node->data, node->index);
        node = node->next;
    }
    printf("size: %d\n", stack_container->size);
    printf("null\n");
}


int main(int ac, char **av)
{
    t_stack_container stack_container = {NULL, 0};

    if (ac >= 2)
    {
        while (--ac > 0)
        {
            if (!ft_fill_stack(&stack_container, ft_split(av[ac], ' ')))
                exit(0);
        }
        if (is_stack_sorted(stack_container.head))
        {
            ft_clear_stack(&stack_container);
            exit(0);
        }
        index_stack(stack_container.head);
        printNode(&stack_container);
    }
    return (0);
}
