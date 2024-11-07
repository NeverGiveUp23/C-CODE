//
// Created by Felix Vargas Jr on 11/4/24.
//
#include <stdio.h>

int multiply(int a, int b){


    int times = a * b;
    printf("%i\n", times);
};

float absoluteValue(float a){
    if (a < 0)
        a = -a;

    return a;
}

char lastName() {
    char last[8];
    printf("Enter a last name: \n");
    scanf("%c\n", &last);
};

char name(){
    char first[8];
    printf("Enter a first name: \n");
    
    scanf("%c\n", &first);
};


char together(){
    name();
}

void multiplyByTwo(float array[],int n ){
    int i;

    for(i = 0; i < n; i++)
        array[i] *= 2;
}


// sorting numbers

void sort (int a[], int n){
    int i , j , temp;


    for(i =0 ; i < n - 1; ++i){
        for(j = 0; j < i + 1; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


int main() {
    multiply(4,8);

    float result = absoluteValue(-77);

    float  floatVals[4] = { 2.1f, 4.4f, 3.7f, 3.3f};

    printf("Absolute Value = %.0f\n", result);

    multiplyByTwo(floatVals, 55);

    for(int i = 0; i < 4; i++){
        printf("%.2f   \n", floatVals[i]);
    };

    int i;

    int array[9] = {
        34, 88,65, 423, 90, 324, 45, -65, 112
    };

    printf(" Before sorting\n");


    for(i = 0; i < 9; i++){
        printf("%i\n", array[i]);
    };

    sort(array, 9);

    printf("\n\nThe array after the sort: \n");

    for(i = 0; i < 9; i++){
        printf("%i\n", array[i]);
    };
    

    return 0;
};