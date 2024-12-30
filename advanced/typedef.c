#include <stdio.h>

typedef int *i_pointer;

#define Peach int
#define int_pointer int *

int_pointer chalk, cheese; // same as int *chalk, cheese -> rule with comma
                           // cheese will be an int
typedef char *char_ptr;

char_ptr Bently, Rolls_Royce; // both will be pointer to a char with typedef

int main() {

  i_pointer p;           // same as int * p;
  i_pointer a, *b;       // same as int* a. int** b;
  i_pointer myArray[10]; // same as in *myArray[10];

  return 0;
}
