//
// Created by Felix Vargas Jr on 11/4/24.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

const int MONTHS = 12;
const int YEARS = 5;

int main() {

    double rain[YEARS][MONTHS] = {
            {4.3,5.6,3.4,7.8,1.2,4.3,5.6,3.4,7.8,1.2,6.7,7.7},
            {4.3,5.6,3.4,7.8,18.2,5.6,3.4,7.8,1.2, 4.5, 6.7, 1.3},
            {4.3,8.6,1.4,2.8,5.2,5.6,33.4,7.8,1.2, 4.5, 6.7, 1.3},
            {20.3,5.6,3.4,7.8,1.2,5.6,3.4,7.8,1.2, 4.5, 6.7, 1.3},
            {4.3,9.6,16.4,7.8,1.2,5.6,3.4,7.8,1.2, 4.5, 6.7, 1.3}
    };

    int year, month;
    float total, subtotal;

    printf("Years\t\tRainfall        (inches)\n");

    for (year = 0, total = 0; year < YEARS; year++){

        for (month = 0, subtotal = 0; month < MONTHS; ++month) {
            subtotal += rain[year][month];

        };
        printf("%5d \t\t%15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    };
    printf("\n The yearly average is %.1f inches. \n\n", total/YEARS);

    printf("MONTHLY AVERAGE: \n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for(month = 0; month < MONTHS; month++){
        for(year = 0, subtotal = 0; year < YEARS; year++){
            subtotal += rain[year][month];
        };
        printf("%5.1f\n ", subtotal/YEARS);
    };

    printf("\n");

    int numbers[3][4] = {
            {1,2,3,4}, // first row
            {5,6,7,8}, // second row
            {9, 10,11, 12} // third row
    };

    printf("%d\n", numbers[1][3]);

    return 0;
}