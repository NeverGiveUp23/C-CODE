#include <stdio.h>

// arrays are allocated sequence of objects that all have the same element.
int ia[11];
float *afp[17];

char str[11]; // creates an array of char with a bound to 11;
// this allocates sufficient storage to create a string with 10 chars.

void func(int arr[5]);
int main(void ){

//    for (unsigned int i = 0; i < 10; i ++){ // for loop iterates 4 times ranging from 0 - 9
//        str[i] = 'o' + i;
//    }
//
//    unsigned int i = 0;
//    unsigned int j = 0;
//
//    int arr[5][4];
//    func(arr[i]);
//    int x = arr[i][j];


int i;
int j;

int number;
int number2;

    printf("Enter a number of time you want the array to be ran: \n");
    scanf("%d\n", &number);
    printf("Enter another number for the total within each array: \n");
    scanf("%d\n", &number2);

for (i = 0; i < number; i++){
        printf("%d\n", i);


    for(j = number2; j >= number; j--){
        printf("%d\n", j);
    };
}

    return 0;
}



