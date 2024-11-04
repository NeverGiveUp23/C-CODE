//
// Created by Felix Vargas Jr on 11/3/24.
//
#include <stdio.h>
#include <string.h>


// structure types contains sequentially allocated member objects.
// useful for declaring collections of related objects.

struct {
    int sigint;
    char sigWord[20];
    char sigLine[100];
} sigline, *sigline_p;



// union types are similar to structures except,
// that the memory used by the member objects overlaps.
// only contain one object at a time
// primarily used to save memory.

union tagtest {
   struct {
     int node1;
   } n1;
   struct {
    int node2;
    int node3;
   } n2;
   struct {
       int node4;
   } n3;
} u, *union_pointer;


// the 'tag' is a special naming for structs, unions and enums
// cant be used to declare

struct tag {
    // TODO
};


int main () {
    sigline.sigint = 5;
    strcpy(sigline.sigWord, "SIGINT");
    strcpy(sigline.sigLine, "This is from SIGLINE");

    sigline_p = &sigline;  // assigning the address of the sigline_a object.

    // we can use the -> operator when you have a pointer referencing the objects
    //
    sigline_p -> sigint = 9;
    strcpy(sigline_p -> sigLine, "This is me again");
    strcpy(sigline_p -> sigWord, "Again");

    // assigning the pointer to union
    union_pointer = &u;

    u.n1.node1 = 66;
    u.n2.node3 = 00;
    u.n3.node4 = 33;

    // assign a pointer to the union and you can use the pointer -> operator

    union_pointer -> n2.node2 = 33;





    return 0;
}