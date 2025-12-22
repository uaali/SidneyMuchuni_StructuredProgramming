#include <stdio.h>

int main(void)
{
    int count = 10;      // Declare integer variable
    int *pCount;         // Declare integer pointer

    pCount = &count;     // Assign address of count to pCount

    // Modify the value of count using the pointer
    *pCount = 25;

    // Print the updated value of count
    printf("Updated value of count: %d\n", count);

    return 0;
}
