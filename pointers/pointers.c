#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
  int i;
  double d;
} widget;


int main() {

int number = 25;
int *pNumber = &number;
/*
  The value &number is the address where the number variable is located

  pNumber is just pointing to the number address

  pNumber has its own address for instance - number can have 1000 as its address
  pNumber will have 445 as its address. 

  think of it like this pNumber(445) = number(1000) -> 25(value);
*/

/* malloc
 the mallac function allocates space for an object of a specified size whose initial value
 is undetermined

*/
  widget *p = malloc(sizeof(widget));
  if(p == NULL){
    printf ("Sorry");
  }

  p -> i = 10;
  p -> d = 22.11;

  free(p);

  // you  can store a return value from malloc as a void pointer to avoid declaring a type for the referened object


char *str = (char *)malloc(16);
if(str) {
  strncpy(str, "123456789abcdef", 15);
  printf("str = %s.\n", str);
  return EXIT_SUCCESS;
}
return EXIT_FAILURE;

/*
The program above allocates 16 bytes of memory  by calling malloc, and then using the 
  strncpy to copy the first 15 bytes of the string into the allocated memory

  I try to make the null-termiunated string by copying one less byte in the allocated memory
  from 16 to 15 in the strncpy function

  the common solution instead of this is to write the null terminater into the last byte
  of the allocated storage.
*/

strncpy(str, "123456789abcdef", 15);
str[15] = '\0'; // null terminater at the end of the string

  //if the source string is less than 15 bytes, the null terminater char will be copied
  // if the source string is 15 bytes or longer, adding this assignment will ensure that the 
  // string is properly null terminated

  // realloc function is used to grow or shrink the allocated memory or size of an array

  void* realloc(void *p, size_t);


  /*
  the realloc function calls the malloc function to allocate new storage
  and then copies the contents of the old storage to the new storage up to the minimum
  of the old and new sizes

  if the memory in the new allocated storage is larger than the old storages, realloc leaves the additional storage uninitialized
  if realloc succeeds in allocating the new object, it calls the free() function to deallocate the old object

  if the allocation fails the realloc function retains the old object data at the same address and returns a null pointer

  */

  void* p2; 
  void *p = malloc(100);
  int nsize;


  if ((nsize == 0) || (p2 = realloc(p, nsize)) == NULL){
    free(p);
    return NULL;
  }

  p = p2;

  /*
  the code snippet above initializes two pointers p, and p2
  the var p refers to the dynamically allocated memory returned by malloc, and p2 starts out unitialized
  The memory is resized by calling the realloc function with the pointer p and the new size nsize;
  the return value from realloc is assigned to p2 to avoid overwrting the p pointer that is stored in p
  
  */


 if (p == NULL){
  void* newp = malloc(nsize);
 } else {
 void* newp = realloc(p, nsize);
 }

 // can be replaced with 

 void* newp = realloc(p, nsize); // this does the same thing as the longer code above
// because calling realloc with a null pointer is the same as calling malloc.





  return 0;
}