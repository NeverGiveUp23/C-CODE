#include <stdio.h>

// when swapping and using pointers you can use the * for pointer declaration
// indicating that the parameter is a pointer to an object.
void swap(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;
}
// when needing to call the object or point to that object - you can use the &
// sign. this is the address-of operator. This genetates the pointer to its
// operand. this now accepts pointers of type int as params.
int main(void) {

  int a = 21;
  int b = 23;

  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  return 0;
}
