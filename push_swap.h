/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:38:07 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/16 09:55:23 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_stack_data
{
    t_stack *head;
    int     size;
}               t_stack_data;

int	ft_stack_size(t_stack *stack);
t_stack_data *init_stack_data(void);
void ft_error(char *message);
int ft_push(t_stack_data *stack, int value);
t_stack *ft_fetch(t_stack_data *stack, int value);
int ft_fill_stack(t_stack_data *stack, char **elements);
void ft_clear_stack(t_stack_data *stack);
int is_stack_sorted(t_stack *stack);
void printNode(t_stack_data *stack);
void index_stack(t_stack *stack);

//operations
void sa(t_stack_data *stack_a);
void sb(t_stack_data *stack_b);
void ss(t_stack_data *stack_a, t_stack_data *stack_b);
void pa(t_stack_data *stack_a, t_stack_data *stack_b);
void pb(t_stack_data *stack_a, t_stack_data *stack_b);
void ra(t_stack_data *stack_a);
void rb(t_stack_data *stack_b);
void rr(t_stack_data *stack_a, t_stack_data *stack_b);
void rra(t_stack_data *stack_a);
void rrb(t_stack_data *stack_b);
void rrr(t_stack_data *stack_a, t_stack_data *stack_b);

//sort
void  sort(t_stack_data *stack);
void sort_three(t_stack_data *stack);
void sort_four(t_stack_data *stack);
void sort_five(t_stack_data *stack);
#endif