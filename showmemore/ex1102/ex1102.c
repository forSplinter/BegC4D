#include <math.h>
#include <stdio.h>

#define PI 3.14159
#define PERIODE .1
#define LONG 50

int main() {
  float graph, s, x;

  for (graph = 0; graph < 2 * PI; graph += PERIODE) {
    s = sin(graph);
    for (x = 0; x < s * LONG; x++)
      putchar('*');
    putchar('\n');
  }
  return (0);
}
