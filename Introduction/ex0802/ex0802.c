#include <stdio.h>

int main() {
  int coord;

  printf("Coordonees de la cible : ");
  scanf("%d", &coord);
  if (coord >= -5 && coord <= 5) {
    puts("Assez proche !");

  } else {
    puts("La cible est encore loin !");
  }
  return (0);
}

// on peut aussi faire des switch case bien evidemment
