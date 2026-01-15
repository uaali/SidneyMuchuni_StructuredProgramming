#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array_items;
    int *number_array;
    int sum = 0;

    /* Read number of elements */
    printf("Input the number of elements to be stored in the array :");
    if (scanf("%d", &array_items) != 1 || array_items <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    /* Allocate memory for the array */
    number_array = malloc(array_items * sizeof *number_array);
    if (number_array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Read array elements */
    printf("Input %d elements in the array :\n", array_items);
    for (int i = 0; i < array_items; i++) {
        printf("element - %d : ", i);
        scanf("%d", &number_array[i]);
    }

    /* Calculate sum of elements */
    for (int i = 0; i < array_items; i++) {
        sum += number_array[i];
    }

    /* Free allocated memory */
    free(number_array);

    /* Display result */
    printf("Sum of all elements stored in the array is : %d\n", sum);

    return 0;
}
