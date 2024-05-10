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

void	ft_check_args(char **av)
{
	int	i;
	int	arg;

	i = 1;
	arg = 0;
	while (av[i])
	{
		if (!ft_isAlldigit(av[i]))
		{
			printf("invalid number\n");
			exit(1);
		}
		arg = ft_atoi(av[i]);
		printf("%d\n", arg);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, "please enter a number\n", 24);
		exit(1);
	}
	ft_check_args(av);
	return (0);
}