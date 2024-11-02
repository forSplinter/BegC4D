#include <stdio.h>
#include <stdlib.h>

char *binbin(int n) {
  static char bin[17];
  int x;

  for (x = 0; x < 16; x++) {
    bin[x] = n & 0x8000 ? '1' : '0';
    n <<= 1;
  }
  bin[x] = '\0';
  return (bin);
}

int main() {
  int input;

  printf("Indiquez une valeur entre 0 et  65535 : ");
  scanf("%d", &input);
  printf("%d vaut en binaire %s \n", input, binbin(input));
  return (0);
}
