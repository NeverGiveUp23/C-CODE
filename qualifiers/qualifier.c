//
// Created by Felix Vargas Jr on 11/4/24.
//



// types can be qualified using one or more of the following -> const, volatile, and restrict
// each changes behaviors when accessing objects.

int main(){

// CONST
// object with the const modifier are not modifiable.
// can be placed in read-only memory by the compiler.
// will result in runtime error if trying to be overwritten

    const int i = 1;
   //  i = 2; // Error -> i is const-qualified

   // you can "Trick" the compiler to change the const qualifier type
   // we can tell the compiler that the const-qualifier is actually a pointer

   const int trick = 9;
   int *trick_p = (int *)&trick;
   *trick_p = 44; // undefined behavior

   // this may work for now but will fail later
   // the const-qualifer will be place in read-only memory causing a memory fault
   // when trying to store the value in the object runtime.

   // you modifyan object that is pointed to a const qualifier by casting const away
   // the original object was not declared const

   int ref = 12;
   const int new = 99;
   const int *ref_pointer = &ref;
   const int *new_pointer = &new;

   *(int *)&ref_pointer= 101; // OK
   *(int *)&new_pointer = 33; // undefined behavior;



   // Volatile
   // model memory-mapped I/O ports and static constant volatile objects
   // think real time clock

   /*
    * The value of the object may change without the knowledge of the compiler
   . using the volatile-qualified lets the compiler know that the value may change
    */

   volatile int port;
   port = port;



    return 0;
}