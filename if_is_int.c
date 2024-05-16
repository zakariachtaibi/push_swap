/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:52:53 by zchtaibi          #+#    #+#             */
/*   Updated: 2024/05/16 09:44:46 by zchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_plus(char *str)
{
	int			sign;
	long long	result;

	result = 0;
	sign = 1;
	if (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	if (!ft_isdigit(*str))
		return (0);
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if ((result * sign) > INT32_MAX || (result * sign) < INT32_MIN)
			return (0);
		str++;
	}
	if (*str)
		return (0);
	return (1);
}