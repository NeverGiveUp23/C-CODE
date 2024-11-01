//
// Created by Felix Vargas Jr on 11/1/24.
//
#include <stdio.h>
#include <math.h>

int main(){
    double loanAmount, interestRate, monthlyPayments;
    int numOfPayments;


    printf("Enter loan amount: ");
    scanf("%lf", &loanAmount);

    printf("Enter annual interest rate: ");
    scanf("%lf", &interestRate);

    printf("Enter loan amount in years: ");
    scanf("%d", &numOfPayments);

    interestRate /= 1200;
    numOfPayments *= 12;

    monthlyPayments = loanAmount * (interestRate * pow(1 + interestRate, numOfPayments)) / (pow(1 + interestRate, numOfPayments) - 1);


    printf("Monthly payments: %.2f\n", monthlyPayments);
    return 0;
}
