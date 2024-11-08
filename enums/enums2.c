#include <stdio.h>
#include <stdlib.h>

typedef enum {
  Savings,
  Checking, 
  MoneyMarket
} AccountType;


void assignRate(AccountType account){
  double interestRate;

  switch (account){
    case Savings:
     interestRate = 1.2;
     break;
    case Checking:
      interestRate = 3.4;
    case MoneyMarket:
      interestRate = 5.5;
      break;
    default: abort();   //causes termination. making it easier to deetect errors
  }

  printf("Interest Rate = %g.\n", interestRate);

}

int main(){

  assignRate(Checking);


  return 0;
}