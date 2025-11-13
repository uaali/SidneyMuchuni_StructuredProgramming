#include <stdio.h>
#include <string.h>

//take user first number
//take operation
//take user second number
//calculate
//display results


int main(void) {
    float num1, num2, result;
    char input[50];
    char op;

    printf("----Simple Calculator----\n\n");

    //first number
    printf("Enter first Number:");
    fgets(input, sizeof(input), stdin);
    if(sscanf(input, "%f",&num1) != 1 ){
        printf("Invalid Input");
        return 1;
    }

    //operator
    printf("Enter operator(+, -, *, /, %%):");
    fgets(input,sizeof(input), stdin);
    sscanf(input, "%c", &op);

    //2nd number
    printf("Enter the second Number:");
    fgets(input, sizeof(input), stdin);
    if(sscanf(input, "%f",&num2) != 1 ){
        printf("Invalid Input");
        return 1;
    }

    switch(op)
    {
        case '+' : result = num1 + num2; break;
        case '-' : result = num1 - num2; break;
        case '*' : result = num1 * num2; break;
        case '%' :
            if ((int)num2 == 0) {
                printf("You can't divide by zero");
                return 1;
            }
        result = (int)num1 % (int)num2;
        break;
        case '/' :
            if(num2 == 0){
                printf("You cant divide by zero");
                return 1;
            }
            else{
                result = num1 / num2; break;

            }
        default:
            printf("Error Calculating Results");
            return 1;
    }


    printf("Results:\n %.2f %c %.2f = %.2f", num1,op,num2,result);


    return 0;
}
