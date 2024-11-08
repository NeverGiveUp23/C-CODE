#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// user should input items they want
// items should have a purchase price with it
// if the items arent in the system, proper handling needs to be done
// Give the total of the items
// needs to be 20 items or less - if more - proper handling

typedef enum
{
  apple = 1,
  chicken,
  orange,
  soda,
  milk,
  rice,
  cereal,
  juice,
} Products;

double itemAmount;

double choosingItems(int choice){
  char itemName[10];

  if(choice == 0 || choice == 10){
    return printf("Sorry not an item...\n");
  };



  switch (choice){
    case apple:
      choice = 1;
      strcpy(itemName, "Apple");
      itemAmount = 1.50;
      break;
    case chicken:
      choice = 2;
      strcpy(itemName, "Chicken");
      itemAmount = 2.25;
      break;
    case orange:
      choice = 3;
      strcpy(itemName, "Orange");
      itemAmount = 5.50;
      break;
    case soda:
      choice = 4;
      strcpy(itemName, "Soda");
      itemAmount = 8.25;
      break;
    case milk:
      choice = 5;
      strcpy(itemName, "Milk");
      itemAmount = 4.50;
      break;
    case rice:
      choice = 6;
      strcpy(itemName, "Rice");
      itemAmount = 6.25;
      break;
    case cereal:
      choice = 7;
      strcpy(itemName, "Cereal");
      itemAmount = 3.45;
      break;
    case juice:
      choice = 8;
      strcpy(itemName, "Juice");
      itemAmount = 4.25;
      break;
  }



    return printf("Amount = %g\nName = %s\n", itemAmount, itemName);
  
};

int main() {
  double fullAmount;
  int choice;
  int answer;
  bool isStillShopping = true;


  printf("Enter your item: ");
  scanf("%i", &choice);

  while (isStillShopping == true)
  {
    choosingItems(choice);
    
    printf("Are you still shopping? 1 for yes, 2 for no: ");
    scanf("%i", &answer);

    if (answer == 1 ){
      isStillShopping;
      printf("Enter your item: ");
      scanf("%i", &choice);
      fullAmount += itemAmount;
      printf("Current Total: $%.2f\n", fullAmount);
    } else if (answer == 2){
      isStillShopping = false;
      printf("Final Total: $%.2f\n", fullAmount);
    }
  };

  return 0;
};