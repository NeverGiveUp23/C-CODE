//
// Created by Felix Vargas Jr on 11/1/24.
//
#include <stdio.h>



int main(){

int n, number, triangleNumber;


    printf("Can you pick a number to triangulate: ");
    scanf("%i", &number);

    triangleNumber = 0;
    for(n = 1; n <= number; n++){
        triangleNumber += n;
    }

    printf("Triangular number %i is %i\n", number, triangleNumber);


    return 0;
}