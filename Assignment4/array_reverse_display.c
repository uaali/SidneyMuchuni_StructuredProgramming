#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array_items;
    int *number_array;

    printf("Input the number of elements to store in the array :");
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
    printf("Input %d number of elements in the array :\n", array_items);
    for (int i = 0; i < array_items; i++) {
        printf("element - %d : ", i);
        scanf("%d", &number_array[i]);
    }

    /* Display array in order */
    printf("The values stored into the array are : ");
    for (int i = 0; i < array_items; i++) {
        printf("%d ", number_array[i]);
    }
    printf("\n");

    /* Display array in reverse */
    printf("The values stored into the array in reverse are : ");
    for (int i = array_items - 1; i >= 0; i--) {
        printf("%d ", number_array[i]);
    }
    printf("\n");

    free(number_array);
    return 0;
}
