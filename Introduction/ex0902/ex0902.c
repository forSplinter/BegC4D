#include <stdio.h>

int main() {
  int x, y;
  x = 0;
  y = 1;

  do {
    printf("%d", x);
    x = x + y;
    printf("%d", y);
    y = y + x;
  } while (y < 300);
  putchar('\n');
  return (0);
}
