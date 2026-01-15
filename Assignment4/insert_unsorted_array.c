#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;
    int value, position;

    /* Read size of array */
    printf("Input the size of array : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    /* Allocate memory (one extra space for insertion) */
    arr = malloc((n + 1) * sizeof *arr);
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Read array elements */
    printf("Input %d elements in the array in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    /* Read value and position */
    printf("Input the value to be inserted : ");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &position);

    /* Display current array */
    printf("The current list of the array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    /* Insert element (position is 1-based) */
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;
    n++;

    /* Display updated array */
    printf("After Insert the element the new list is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
