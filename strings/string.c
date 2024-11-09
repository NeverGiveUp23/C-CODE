#include <stdio.h>
#include <string.h>

// char contains a single data type
// plusSign = '+';

/*
anything between the double quotes is considered a string to the compiler
*/

// a string in memory is represented by a bit for each char.

char string[] = {"Hello!"};

// you cannot after initializing the string - technically it is an array
// char str[100]
// str = "Hello"  // this will be an error

// to use the array as a string after you initialize it, you would need to use
// strcopy


// constant or const is used to not change the value
// you can use the #define constants

#define TAXRATE 0.14; // when your program is compiled, the value 0.14 will be substituted where you have taxrate


const int MONTHS = 12; // turns it into a read only value and lets you declare a type

// we can use string libaries
char str1[10];

int main() {
  char s[100];
  int i;

  // strcpy will copy the string into the variable but will not check the length
  // strncpy will do the same but will ask for a 3rd parameter of the fixed length that you need
  strncpy(str1, string, 10); // if string in the second param is bigger than 10, str1 will only copy the first 10 chars

  strcpy(s, "Hello");
  char t[100];

  strcpy(t, "Hello");

  for (i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      if(s[i] == s[j]){
        printf("Same");
      };
  }
}

printf("Length of the string is: %d\n", strlen(s));

return 0;
}