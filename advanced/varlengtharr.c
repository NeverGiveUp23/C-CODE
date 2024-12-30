#include <stdio.h>
#include <stdbool.h>


int totalSum(){
    int arrSize = 0; // for the user input and where to store it
    printf("Enter a number: ");
    scanf("%i", &arrSize); // storing user input for length of the array

    int arr[arrSize]; // putting the length of the array into the actual array

    bool c = true; // for the while loop condition
    int count = 0; // count to know when to exit the while loop

    while(c){ // while loop since we need to get each input for the N size of the array

        for(int i = 0; i < arrSize; ++i){ // starting the loop
            printf("Number %i: ", count);
            scanf("%d", &arr[i]); // inputting the number from user input on the current element i
            count++; // increment count to eventually match the arrSize to know when to exit the loop
        }

        if(count == arrSize) // check if match
            c = false; // if match, exit the while loop by changing to false
    }

    int sum = 0;

    for(int j = 0; j < arrSize; ++j){
        sum += arr[j]; // going through the elements values and adding
    }

    printf("%d", sum);
}

int main() {
    totalSum();
  return 0;
}
