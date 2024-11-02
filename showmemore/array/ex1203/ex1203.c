#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int tab1[] = {10, 12, 14, 15, 16, 18, 20};
  float tab2[6];
  int x;

  for (x = 0; x < 6; x++) {
    tab2[x] = sqrt(tab1[x]);
  }
  for (x = 0; x < 6; x++)
    printf("the scare root of %d is %.2f\n", tab1[x], tab2[x]);

  return (0);
}
