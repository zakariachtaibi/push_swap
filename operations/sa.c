#include "push_swap.h"

void swap_a(int *stack_a, int size_a) {
    if (size_a < 2) {
        // Not enough elements to swap
        return;
    }
    
    int temp = stack_a[0];
    stack_a[0] = stack_a[1];
    stack_a[1] = temp;
}