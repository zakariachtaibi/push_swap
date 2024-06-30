#include "push_swap.h"

void ft_error_plus(const char *message, t_stack_data *stack, char **elements) {
    if (message)
        write(1, message, ft_strlen(message));
    if (stack)
        ft_clear_stack(stack);
    if (elements)
        free_elements(elements);
    exit(1);
}

int	ft_atoi_plus(const char *nptr, t_stack_data *stack, char **elements)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -sign;
	if (nptr[i] < '0' || nptr[i] > '9')
		ft_error_plus("Error\n", stack, elements);
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + (nptr[i] - '0');
		if ((nbr > 2147483648 && sign == -1) || (nbr > 2147483647 && sign == 1))
			ft_error_plus("Error\n", stack, elements);
		i++;
	}
	if (nptr[i])
		ft_error_plus("Error\n", stack, elements);
	return (nbr * sign);
}