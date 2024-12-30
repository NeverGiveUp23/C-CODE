#include <printf.h>
#include <stdlib.h>
#include <string.h>

//
// Created by Felix Vargas Jr on 11/4/24.
//


typedef enum  {
    Savings,
    Checkings,
    MoneyMarket
} accountType;

enum fruit {
    apple,
    cherry,
    banana
};


 double assignInterestRates(accountType account){
    double interestRates;

    switch (account) {
        case Savings:
            interestRates = 5.0;
            break;
        case Checkings:
            interestRates = 4.5;
            break;
        case MoneyMarket:
            interestRates = 3.0;
            break;
    }

    printf("Your interest rates are: %.1f\n", interestRates);
    return 0;
};

int main() {

    char myaccount[20];
    printf("What is your account?: ");
    scanf("%c",myaccount);

    if (strcpy(myaccount, "Savings")) {
        printf("%.1f\n", assignInterestRates(Savings));
    } else if(strcpy(myaccount, "Checkings")) {
        printf("%.1f\n", assignInterestRates(Checkings));
    };


    static int count = 1;

    while ( count <= 5) {
        printf("%i\n", count);
        count++;
    };


    do {
        printf("I'm the best %i\n", count);
        count++;
    } while( count <= 10);



    int grade;

    printf("What was your grade?: ");
    scanf("%d\n", &grade);

    switch(grade) {
        case 100:
            printf("You PASSED!\n");
            break;
        case 90:
            printf("You did great!\n");
            break;
        case 80:
            printf("Sorry you failed.\n");
            break;
    }


    return 0;
}