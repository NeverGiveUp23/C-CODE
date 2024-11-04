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

//
//int i;
//int j;
//
//int number;
//int number2;
//
//    printf("Enter a number of time you want the array to be ran: \n");
//    scanf("%d\n", &number);
//    printf("Enter another number for the total within each array: \n");
//    scanf("%d\n", &number2);
//
//for (i = 0; i < number; i++){
//        printf("%d\n", i);
//
//
//    for(j = number2; j >= number; j--){
//        printf("%d\n", j);
//    };
//}


    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter you grades from the last 10 tests:\n ");

    int i;
    for(i = 0; i < count; i++){
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    };

    average = (float) sum/count;

    printf("%.1f\n", average);

    printf("%d\n", grades[4]);

    // some compilers let you pock and choose which elements are initialized
    int data[10] = {
            [2] = 700 ,
            [8] = 99,
            [1] = 88
    };

    const int MONTHS = 12;

    int days[MONTHS] = {
            28,
            31,
            31,
            28,
            28,
            29,
            30,
            32,
            31,
            22,
            29,
            30
    };

    printf(" -------------------------------------- \n");

    int d;
    for (int d = 0; d < MONTHS; ++d) {
        printf("Month %d has %d days\n", d + 1, days[d]);
    }

    printf(" -------------------------------------- \n");

    int input[11];

    for (int i = 0; i < 11; i++){
        input[i] = i * 2;
    };

    for (int j = 1; j <= 10; ++j) {
        printf("input values[%i] = %i\n", j, input[j]);
    }

    return 0;


}



