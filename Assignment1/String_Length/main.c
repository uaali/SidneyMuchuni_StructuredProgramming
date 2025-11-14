#include <stdio.h>
#include <string.h>

int main(){

    char name[100];

    printf("----String Length Calculator----\n\n");

    printf("Please enter your amazing name: ");
    fgets(name, sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';

    int length = strlen(name);
    printf("\nHello %s, \nThe length of your name is %d!\n\n\n", name, length);

    return 0;

}