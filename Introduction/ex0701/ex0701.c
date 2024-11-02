#include <stdio.h>

int main() {
  int a, b, c;
  printf("J'attend trois lettres :");
  a = getchar();
  b = getchar();
  c = getchar();

  printf(" Les trois lettres sont : '%c', '%c' et '%c'. \n", a, b, c);
  return (0);
}
