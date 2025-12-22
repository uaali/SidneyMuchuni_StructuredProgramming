#include <stdio.h>

/* Function to swap two numbers using pointers */
void swapNumbers(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 10;
    int b = 20;

    // Print values before swapping
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call function by passing addresses
    swapNumbers(&a, &b);

    // Print values after swapping
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
