#include <stdio.h>

void graph(int cmptr) {
  int x;
  for (x = 0; x < cmptr; x = x + 1)
    putchar('*');
  putchar('\n');
}

int main() {
  int valeur = 15;

  while (valeur <= 64) {
    graph(valeur);
    printf("la valeur est %d\n", valeur);
    valeur *= 2;
  }
  return (0);
}
