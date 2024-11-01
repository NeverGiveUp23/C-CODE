#include <stdio.h>


void increment(void){
    static unsigned int counter = 0;
    counter++;
    printf("%d\n", counter);
}


int max(int a, int b){
  return a > b ? a : b;
};




int main( void ){
    for(int i = 0; i < 5; i++){
        increment();
    };
    max(23, 55);

    return 0 ;
}