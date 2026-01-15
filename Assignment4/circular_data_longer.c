#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;     /* Index for next insertion */
int count = 0;    /* Number of elements currently stored */

/* Insert a new sample into the circular buffer */
void insertSample(int value)
{
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE) {
        count++;
    }
}

/* Print samples from oldest to newest */
void printSamples(void)
{
    if (count == 0) {
        printf("Buffer is empty\n");
        return;
    }

    int start = (head - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Stored samples (oldest -> newest): ");
    for (int i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main(void)
{
    int choice, value;

    while (1) {
        printf("\n1. Insert sample\n");
        printf("2. Print samples\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter sensor value: ");
            scanf("%d", &value);
            insertSample(value);
        }
        else if (choice == 2) {
            printSamples();
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
