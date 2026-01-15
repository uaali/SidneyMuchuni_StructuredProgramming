#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;

    /* Read number of elements */
    printf("Input the number of elements to be stored in the array: ");
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

    /* Print unique elements */
    printf("The unique elements found in the array are: ");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    free(arr);
    return 0;
}
