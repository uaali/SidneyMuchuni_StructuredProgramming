#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, result;

    printf("----Know your Sphere Surface Area----\n\n\n");

    printf("Please Enter the radius of your amazing sphere: ");
    scanf("%f", &radius);
    printf("\n\n");

    result = 4 * 3.14 * radius * radius;

    printf("4 * 3.14 * %.2f * %.2f",radius,radius);
    printf("=: %.2f",result);
    printf("\n\n");

    printf("Your Area is %.2f \n\n",result);
    return 0;
}
