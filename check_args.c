#include "push_swap.h"

int ft_push(t_stack **stack, int value)
{
    t_stack *new_element;

    new_element = (t_stack *)malloc(sizeof(t_stack));
    if (!new_element)
        return (0);

    new_element->data = value;

    if (!(*stack))
    {
        new_element->next = NULL;
        *stack = new_element;
    }
    else
    {
        new_element->next = *stack;
        *stack = new_element;
    }

    return (1);
}

t_stack *ft_check_double(t_stack *stack, int value)
{
    t_stack *index;
    t_stack *temp;

    temp = NULL;
    if (!stack)
        return NULL;
    index = stack;
    while (index)
    {
        if (index->data == value)
            return index;
        if (!index->next)
            temp = index;
        index = index->next;
    }
    if (value == -1)
        return temp;

    return NULL;
}

static int ft_isdigits(char *word)
{
    size_t length;
    size_t index;

    if (!word)
        return (0);
    length = ft_strlen(word);
    index = 0;
    while (index < length)
    {
        if (!ft_isdigit(word[index]))
            return (0);
        index++;
    }
    return (1);
}

int ft_fill_stack(t_stack **stack, char **elements)
{
    int index;
    int value;

    index = 0;
    while (elements[index])
        index++;
    while (--index >= 0)
    {
        if (!ft_isdigits(elements[index]))
            return (0);
        value = ft_atoi(elements[index]);
        if (ft_check_double(*stack, value))
            return (0);
        ft_push(stack, value);
    }
    index = -1;
    while (elements[++index])
        free(elements[index]);
    free(elements);
    return (1);
}
