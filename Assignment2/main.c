#include <stdio.h>
#include <stdlib.h>

int login(int pin){
    int tries = 3;
    int input;

    while(tries > 0){
        printf("Enter pin - %d trial(s) left : ",tries);
        scanf("%d",&input);

        if(input == pin){
            return 0;
        }else{
            tries--;
        }
    }
    return 1;
}

void checkBalance(int *balance){
    printf("Your Balance is: Ksh. %d", *balance);
}

void deposit(int amount, int *balance) {
    if(amount <= 0){
        printf("Sorry, you must deposit a positive amount\n");
        return;
    }
    *balance += amount;
    printf("You have successfully deposited Ksh. %d\nYour new balance is Ksh. %d\n", amount, *balance);
}

void withdraw(int amount, int *balance) {
    if(amount <= 0){
        printf("You must withdraw a positive amount\n");
        return;
    }
    if(amount > *balance){
        printf("Insufficient balance. You have Ksh. %d\n", *balance);
        return;
    }
    *balance -= amount;
    printf("You have successfully withdrew Ksh. %d\nYour new balance is Ksh. %d\n", amount, *balance);
}


int main()
{
    int success;
    int pin = 1234;
    int balance = 0;
    int e = 0;
    int input;

    success = login(pin);
    if(success == 0){
        printf("Login Successful\n\n");
        while(e == 0){
            printf(" \n------Menu------\n");
            printf(" 1. Balance Inquiry\n 2. Deposit\n 3. Withdraw\n 4. Exit\n:");

            scanf("%d",&input);

            switch(input){
            case 1:
                checkBalance(&balance);
                break;
            case 2:
                printf("\nEnter amount to deposit: ");
                scanf("%d",&input);
                deposit(input,&balance);
                break;
            case 3:
                printf("\nEnter amount to withdraw: ");
                scanf("%d",&input);
                withdraw(input,&balance);
                break;
            case 4:
                e = 1;
                break;
            default:
                printf("\nEnter a valid choice");
                break;
            }
        }
    }else{
        printf("Oops Maximum trials reached");
    }
    return 0;
}
