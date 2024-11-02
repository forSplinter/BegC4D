#include <stdio.h>

float conv(float f) {
  float t = (f - 32) / 1.8;

  return (t);
}

int main() {
  float tf, tc;
  printf("Température en Fahrenheit: ");
  scanf("%f", &tf);
  tc = conv(tf);
  printf("%.1fF vaut %.1fC\n", tf, tc);
  return (0);
}
