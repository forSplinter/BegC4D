#include <stdio.h>

int main() {
  char tto[3][3][3];
  int x, y, z;

  for (x = 0; x < 3; x++)
    for (y = 0; y < 3; y++)
      for (z = 0; z < 3; z++)
        tto[x][y][z] = 'o';
  tto[1][1][1] = 'x';

  puts("Une partie de Tic-tac-toe 3D ?");
  for (z = 0; z < 3; z++) {
    printf("Niveau %d\n", z + 1);
    for (x = 0; x < 3; x++) {
      for (y = 0; y < 3; y++)
        printf("%c\t", tto[x][y][z]);
      putchar('\n');
    }
  }
  return (0);
}
