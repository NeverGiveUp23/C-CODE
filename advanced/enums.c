#include <stdbool.h>
#include <stdio.h>
#include <string.h>

enum Suit { club = 1, diamond, heart, spade };

enum Face {
  one = 1,
  two,
  three,
  four,
  five,
};

struct Card {
  enum Suit suit;
  int suitValue;
  enum Face face;
  int faceValue;
  bool isWild;
};

struct Card card;

int main(int argc, char *argv[]) {

  printf("struct card is the size of %lu bytes\n", sizeof(enum Suit));

  int p = 3;
  int *pP = &p;

  printf("%d\n", *pP); // points to p;

  return 0;
}
