#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;
    int max, min;

    /* Read number of elements */
    printf("Input the number of elements to be stored in the array :");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    /* Allocate memory */
    arr = malloc(n * sizeof *arr);
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Read array elements */
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    /* Initialize max and min */
    max = min = arr[0];

    /* Find maximum and minimum */
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    /* Display result */
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    free(arr);
    return 0;
}
