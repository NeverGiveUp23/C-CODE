#include <stddef.h>
#include <stdio.h>

int main() {

  size_t size = 0;
  printf("Enter the numbedr you want to store: ");
  scanf("%zd", &size);

  float values[size];

  int rows = 0, cols = 0;
  printf("Enter the number of rows: ");
  scanf("%i", &rows);

  printf("Enter number of columns: ");
  scanf("%i", &cols);

  int table[rows][cols];
  int tot = 0;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      tot += table[i][j];
    }
  }
  printf("%i", tot);

  int total = 0;
  printf("Enter a size of the array you want: ");
  scanf("%i", &total);
  printf("You entered %i\n", total);

  int arr[total];
  printf("Please enter %i numbers: ", total);
  int i;
  for (i = 0; i < total; ++i) {
    scanf("%i", );
  }

  return 0;
}
