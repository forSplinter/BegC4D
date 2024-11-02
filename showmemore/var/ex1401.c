#include <stdio.h>
#include <stdlib.h>

int main() {
  struct joueur {
    char nomj[32];
    int score;
  };
  struct joueur xbox;

  printf("Non du joueur :");
  scanf("%s", xbox.nomj);
  printf("Meilleur score : ");
  scanf("%d", &xbox.score);

  printf("Meilleur score de %s : %d\n", xbox.nomj, xbox.score);
  return (0);
}
