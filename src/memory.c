// start
#include<stdio.h>

int main(void) {

    int stack_one = 24;
    printf("Stack : %d\n", stack_one);
    printf("Firts stack in memory: %p\n", &stack_one);

    int *stack_two = &stack_one;
    printf("%p\n", stack_two);
    printf("%p\n", (void *)stack_two);
    return 0;
}