#include <stdio.h>
int j; // file scope for j begins
int main(void) {
  // TODO:
  int i; // block scope for i
  int j = 1; // block scope for j
  i++;

  for (int i = 0; i < 2; i++){ // block sdcope for inner i
      int j = 2;
      printf("%d\n", j);
  } // block scope for innner j and i begins


  return 0;
}
