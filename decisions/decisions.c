#include <stdio.h>
#include <math.h>

double gradeAvg(int numberOfGrades)
{
  int number;
  int i, grade;
  int totalGrades = 0;
  int failureCount = 0;
  float average;

  printf("Enter a number: ");
  scanf("%i", &number);

  if (number < 0)
  {
    number = -number;
  };

  printf("Absolute number is %i\n", number);
  printf("How many grades are we checcking?: ");
  scanf("%i", &numberOfGrades);

  for (i = 0; i < numberOfGrades; i++)
  {
    printf("Enter grade #%i: ", i);
    scanf("%i", &grade);

    totalGrades += grade;

    if (grade < 65)
    {
      ++failureCount;
    };
  };

  average = (float)totalGrades / numberOfGrades;

  printf("\n Grade average = %.2f\n", average);

  printf("Number of failures %i\n", failureCount);
}

int main () {

    gradeAvg(5);

  return 0;
}