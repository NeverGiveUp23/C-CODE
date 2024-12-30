#include <stdio.h>
#include <stdbool.h>

struct arrDef {
    int arrSize;
};

int totalSum(){
    int size = 0;// for the user input and where to store it
    struct arrDef val = {size}; // defining the value for the arrSize in the struct
    struct arrDef* val_p = &val; // setting up a pointer to point to the struct

    printf("Enter a number: ");
    scanf("%i", &val_p->arrSize); // storing user input for length of the array -> using the pointer to get the address of arrSize

    int arr[val_p->arrSize]; // putting the length of the array into the actual array -> using the pointer to use the value

    bool c = true; // for the while loop condition
    int count = 0; // count to know when to exit the while loop

    while(c){ // while loop since we need to get each input for the N size of the array

        for(int i = 0; i < val_p->arrSize; ++i){ // starting the loop -> pointing to the value
            printf("Number %i: ", count);
            scanf("%d", &arr[i]); // inputting the number from user input on the current element i
            count++; // increment count to eventually match the arrSize to know when to exit the loop
        }

        if(count == val_p->arrSize) // check if match
            c = false; // if match, exit the while loop by changing to false
    }

    int sum = 0;

    for(int j = 0; j < val_p->arrSize; ++j){
        sum += arr[j]; // going through the elements values and adding
    }

    printf("%d", sum);
}

int main() {
    totalSum();
  return 0;
}
