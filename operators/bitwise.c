#include <stdio.h>


int main(){

    // unsigned can only be negative
    // signed can be negative

    unsigned int a = 60;
    unsigned int b = 13;

    int result = 0;

    result = a << b;

    int size = sizeof a;
    int size2 = sizeof b;



    printf("result is %d, %d bytes\n", result, size2);

    // type conversion
    // float and int the amount will get truncated
    int x = 0;
    float f = 12.5;
    x = f; // the value is 12
    printf("%d\n", x);

    int k = 12;
    float i = 20.0;
    float divide = (i / k); // this will ensure it is a float when converting
    printf("%f\n", divide);

    // you can cast if you want it to be an int from a float as well
    float divide2 = (int) (i / k);
    printf("%.2f\n", divide2); // this makes it a whole number with the decimal point (1.00)


    float adding = (int)21.54 + (int)67.99;
    int size3 = sizeof adding + (int)divide;
    printf("%.0f\n Size in bytes: %d\n", adding, size3);

    if(size3 > 4) {
        printf("Hey you have more than 4 bytes here, it is: %d\n", size3);
        size3 = sizeof adding;
        printf("Lets fixe that for you\n");
        printf("Fixing.........\n");
        printf("You now have %d bytes here.\n", size3);
    };

    char str[11];

    int strSize = sizeof str;
    printf("%d\n", strSize);

    int total = (2 * 5) + 18 - 9 * (5 * 4);

    int mortgageRate = (12/ 7);
    float loan = (mortgageRate * 650000);
    printf("%f\n", loan);

    return 0;
}