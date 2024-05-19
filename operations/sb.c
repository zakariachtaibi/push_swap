void swap_b(int *stack_b, int size_b) {
    if (size_b < 2) {
        // Not enough elements to swap
        return;
    }
    
    int temp = stack_b[0];
    stack_b[0] = stack_b[1];
    stack_b[1] = temp;
}