#include <stdio.h>


struct entry {
  int value;
  struct entry *next;
};

int main(){
  struct entry n1, n2 , n3;
  struct entry *listPointer = &n1;
    

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;


    n3.value = 300;
    n3.next = (struct entry *) 0;


    struct entry n2_3;

    while(listPointer != (struct entry *) 0){
      printf("%i\n", listPointer->value);
      listPointer = listPointer->next;
    }

// inserting a new node in the link list;

    n2.next = &n2_3;
    n2_3.value = 250;
    n2_3.next = &n3;

    while (listPointer != NULL)
    {
      printf("%i\n", listPointer->value);
      listPointer = listPointer->next;
    }


  return 0;
}