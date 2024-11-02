#include <stdio.h>
#include <stdlib.h>

#define TAILLE 3
int main() {
  char prez[TAILLE][8] = {"Sarkozy", "Coty", "Grevy"};
  int x, index;

  for (x = 0; x < TAILLE; x++) {
    index = 0;
    while (prez[x][index] != '\0') {
      puts(prez[x]);
      index++;
    }
    putchar('\n');
  }
  return (0);
}
