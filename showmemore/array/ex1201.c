#include <stdio.h>
#include <stdlib.h>

int main() {
  int score[4];
  int x;

  for (x = 0; x < 4; x++) {
    printf("Votre score #%d :", x + 1);
    scanf("%d", &score[x]);
  }
  puts("Voici vos meilleurs score");
  for (x = 0; x < 4; x++)
    printf("#%d %d\n", x + 1, score[x]);
}
