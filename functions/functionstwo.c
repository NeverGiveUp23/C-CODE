#include <stdio.h>


void scalarMultiply(int matrix[3][5], int scalar){

  int row, column;

  for(row = 0; row < 3; row++){
    for(column = 0; column < 5; column++){
      matrix[row][column] *= scalar;
    }
  }
};

void displayMatrix(int matrix[3][5]){
  int row, column;

    for(row = 0; row < 3; row++){
      for(column = 0; column < 5; column++){
        printf("%5i\n", matrix[row][column]);
      }
    }
};


void addMatrix(int matrix[3][5], int scalar){


  int row, column;

  for(row = 0; row < 3; row++)
      for(column = 0; column < 5; column++)
        matrix[row][column] += scalar;
};


int main() {

  void scalarMultiply(int matrix[3][5], int scalar);
  void displayMatrix(int matrix[3][5]);

  int sampleMatrix[3][5] = {
    {3,5,6,7,3},
    {5,1,9,5,3},
    {63,86,3,55,12}
  };

  printf("Original Matrix:\n");
  displayMatrix(sampleMatrix);

  printf("Multiplied matrix:\n");
  scalarMultiply(sampleMatrix, 5);

  printf("multiplied by 5:\n");
  displayMatrix(sampleMatrix);

  addMatrix(sampleMatrix, 5);  
  printf("Added 5 after multiplication: \n");
  displayMatrix(sampleMatrix);
  
  
  return  0;
}