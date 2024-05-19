#include "push_swap.h"

int ft_push(t_stack_container *stack_container, int value)
{
    t_stack *new_element;

    new_element = (t_stack *)malloc(sizeof(t_stack));
    if (!new_element)
        return (0);

    new_element->data = value;
    new_element->next = stack_container->head;
    stack_container->head = new_element;
    stack_container->size++;

    return (1);
}


t_stack *ft_fetch(t_stack_container *stack_container, int value)
{
    t_stack *current = stack_container->head;

    while (current)
    {
        if (current->data == value)
            return current;
        current = current->next;
    }

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

int ft_fill_stack(t_stack_container *stack_container, char **elements)
{
    int index = 0;
    int value;

    while (elements[index])
        index++;
    while (--index >= 0)
    {
        if (!ft_isdigits(elements[index]))
            return (0);
        value = atoi(elements[index]);
        if (ft_fetch(stack_container, value))
            return (0);
        if (!ft_push(stack_container, value))
            return (0);
    }
    index = -1;
    while (elements[++index])
        free(elements[index]);
    free(elements);
    return (1);
}

