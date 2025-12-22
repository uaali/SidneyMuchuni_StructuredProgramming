#include <stdio.h>

int main(void)
{
    int num1 = 15;       // Declare first integer variable
    int num2 = 25;       // Declare second integer variable
    int *ptr1;           // Declare pointer for num1
    int *ptr2;           // Declare pointer for num2
    int sum;             // Variable to store the result

    ptr1 = &num1;        // Assign address of num1 to ptr1
    ptr2 = &num2;        // Assign address of num2 to ptr2

    // Add values using pointer dereferencing
    sum = *ptr1 + *ptr2;

    // Print the result
    printf("Sum of num1 and num2: %d\n", sum);

    return 0;
}
