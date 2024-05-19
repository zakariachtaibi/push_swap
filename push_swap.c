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

void printNode(t_stack_data *stack)
{
    t_stack *node = stack->head;
    while (node)
    {
        printf("value: %d, index: %d\n", node->data, node->index);
        node = node->next;
    }
    printf("size: %d\n", stack->size);
}


int main(int ac, char **av)
{
    t_stack_data stack;

    stack.head = NULL;
    stack.size = 0;
    if (ac >= 2)
    {
        while (--ac > 0)
        {
            if (!ft_fill_stack(&stack, ft_split(av[ac], ' ')))
                exit(0);
        }
        if (is_stack_sorted(stack.head))
        {
            ft_clear_stack(&stack);
            exit(0);
        }
        index_stack(stack.head);
        printNode(&stack);
		// sa(&stack);
        // ra(&stack);
        // sa(&stack);
        // rra(&stack);
		// printNode(&stack);
        sort(&stack);
        // printNode(&stack);
		ft_clear_stack(&stack);
    }
    return (0);
}

// int main(int ac, char **av)
// {
//     t_stack_data stack_a;
//     t_stack_data stack_b;

//     stack_a.head = NULL;
//     stack_a.size = 0;
//     stack_b.head = NULL;
//     stack_b.size = 0;

//     if (ac >= 2)
//     {
//         while (--ac > 0)
//         {
//             if (!ft_fill_stack(&stack_b, ft_split(av[ac], ' ')))
//                 exit(0);
//         }
//         index_stack(stack_a.head);
//         index_stack(stack_b.head);

//         printf("stack_b\n");
//         printNode(&stack_b);
//         printf("stack_a\n");
//         printNode(&stack_a);


//         // sb(&stack_b);
//         // pa(&stack_a, &stack_b);
//         rb(&stack_b);
//         rrb(&stack_b);
//         // rra(&stack_a);
//         // pa(&stack_a, &stack_b);
//         // pb(&stack_b, &stack_a);

        
//         printf("after ---------------\n");
//         printf("stack_b\n");
//         printNode(&stack_b);
//         printf("stack_a\n");
//         printNode(&stack_a);

        
//         ft_clear_stack(&stack_a);
//         ft_clear_stack(&stack_b);
//     }

//     return (0);
// }