/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:38:07 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/06/06 21:29:08 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_stack_data
{
	t_stack			*head;
	int				size;
}					t_stack_data;

// utils
void				free_elements(char **split);
void				ft_clear(t_stack_data *stack, char **elements);
void				ft_error(char *msg);
int					ft_stack_size(t_stack *stack);
t_stack_data		*init_stack_data(void);
int					ft_push(t_stack_data *stack, int value);
t_stack				*ft_fetch(t_stack_data *stack, int value);
int					ft_fill_stack(t_stack_data *stack, char **elements);
void				ft_clear_stack(t_stack_data *stack);
int					is_stack_sorted(t_stack *stack);
void				printNode(t_stack_data *stack);
void				index_stack(t_stack *stack);
int					search_max(t_stack_data *stack_a);
void				ft_create_stack(t_stack_data *stack);
int					check_empty(char *str);
void				ft_full_clear(t_stack_data *stack_a, t_stack_data *stack_b);
void				ft_clear_digit(t_stack_data *stack, char **elements);

// operations
void				swap(t_stack_data *stack);
void				sa(t_stack_data *stack_a);
void				sb(t_stack_data *stack_b);
void				ss(t_stack_data *stack_a, t_stack_data *stack_b);
void				pa(t_stack_data *stack_a, t_stack_data *stack_b);
void				pb(t_stack_data *stack_b, t_stack_data *stack_a);
void				rotate(t_stack_data *stack);
void				ra(t_stack_data *stack_a);
void				rb(t_stack_data *stack_b);
void				rr(t_stack_data *stack_a, t_stack_data *stack_b);
void				reverse_rotate(t_stack_data *stack);
void				rra(t_stack_data *stack_a);
void				rrb(t_stack_data *stack_b);
void				rrr(t_stack_data *stack_a, t_stack_data *stack_b);

// sort
void				sort(t_stack_data *stack_a, t_stack_data *stack_b);
void				sort_three(t_stack_data *stack);
void				sort_four(t_stack_data *stack);
void				sort_five(t_stack_data *stack);
void				send_to_stack_b(t_stack_data *stack_a,
						t_stack_data *stack_b);
void				send_to_stack_a(t_stack_data *stack_a,
						t_stack_data *stack_b);
#endif