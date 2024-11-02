#include <stdio.h>

void vegas() {
  int a = -11;

  printf("Dans la fonction vegas(), a=%d\n", a);
}

int main() {
  int a = 364;

  printf("Dans la fonction main(), a=%d\n", a);
  vegas();
  printf("De retour dans main(), a = %d\n", a);
  return (-1);
}
