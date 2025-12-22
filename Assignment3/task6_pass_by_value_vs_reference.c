#include <stdio.h>

/* Function using pass by value */
void incrementByValue(int x)
{
    x = x + 1;
}

/* Function using pass by reference */
void incrementByReference(int *x)
{
    *x = *x + 1;
}

int main(void)
{
    int number = 10;

    // Call pass by value function
    incrementByValue(number);
    printf("After pass by value: %d\n", number);

    // Call pass by reference function
    incrementByReference(&number);
    printf("After pass by reference: %d\n", number);

    return 0;
}
