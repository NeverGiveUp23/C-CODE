#include <stdio.h>
#include <stdbool.h>

int main() {

    int arrSize = 0;
    printf("Enter a number: ");
    scanf("%i", &arrSize);

    int arr[arrSize];

    bool c = true;
    int count = 0;

    while(c){

        for(int i = 0; i < arrSize; ++i){
            printf("Number %i: ", count);
            scanf("%d", &arr[i]);
            count++;
        }

        if(count == arrSize)
            c = false;
    }

    int sum = 0;

    for(int j = 0; j < arrSize; ++j){
        sum += arr[j];
    }

    printf("%d", sum);

  return 0;
}
