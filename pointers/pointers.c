#include <stdio.h>




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




  return 0;
}