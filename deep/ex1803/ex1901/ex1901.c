#include <stdio.h>

int main() {
  float temps[5] = {58.7, 63.12, 65.0, 63.3, 61.1};
  float *a;
  a = temps;
  printf("mardi il fera %.1f\n", *(a + 1));
  printf("Vendredi, il fera %.1f\n", *(a + 4));
  return (0);
}
