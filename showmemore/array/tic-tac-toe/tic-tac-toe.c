#include <stdio.h>
#include <stdlib.h>

int main() {
  char tto[3][3];
  int x, y;

  for (x = 0; x < 3; x++)
    for (y = 0; y < 3; y++)
      tto[x][y] = '.';
  tto[1][1] = 'x';

  puts("Une partie de Tic-tac-toe ? ");
  for (x = 0; x < 3; x++) {
    for (y = 0; y < 3; y++)
      printf("%c\t", tto[x][y]);
    putchar('\n');
  }
  return (0);
}
