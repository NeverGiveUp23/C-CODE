//
// Created by Felix Vargas Jr on 12/29/24.
//

#include <stdio.h>
#include <stdlib.h>

struct s {
    int arraySize;
    int arr[];
};

int main() {
    int desiredSize = 20;
    struct s* s_ptr;

    s_ptr = malloc(sizeof (struct s) + desiredSize * sizeof (int )); // size of struct s is for the members besides flexible array -> desired size * sizeof is for the flexible array

    if(s_ptr == NULL)
        perror("Failed to allocate memory");

    s_ptr->arraySize = desiredSize;

    for(int i = 0; i < s_ptr->arraySize; i++){
        *s_ptr->arr += 1;
        printf("%i, ", *s_ptr->arr);
    }

    free(s_ptr);
    s_ptr = NULL;


    return 0;
}
