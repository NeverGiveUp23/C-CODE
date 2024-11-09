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



  char str2[] = "Hello my name is Jordan";
  char temp[50];

 // strncpy(temp, str2, sizeof(str2) - 1); // the - 1 for the null pointer at the end of the string.

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
};



char str3[50], str4[50];

strcpy(str3, "Hello");
strcpy(str4, "Hello2");


strncat(str4, str3, 50);
printf("Final string: %s\n", str4);

/*  strchr()

the strchr is a function that will search through the given string
the first param is for the string that you want to search, the second is for the char you are searching for.

the function will search the string starting at the begining and return a pointer to the first position in the string.

to store the value thats returned, you must create a variable that can store the address of a char.
*/


// this is how you would use the function.
char search[] = "A long walk in the park";
char ch = 'l';
char *pCh = NULL; // we set it to null bcus right now it will not point to anything
pCh = strchr(search, ch); // this will find the first 'l' in the string which is in the 2 index


/* strstr
the strstr() function will return the string your looking for not just the char.ch
*/
char text[] = "my dog is the best";
char word[] = "best";
char *pWord = "best";
pWord= strstr(text, word);



return 0;
}