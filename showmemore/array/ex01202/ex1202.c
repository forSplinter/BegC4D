#include <stdio.h>
#include <stdlib.h>

int main() {
  float tabBourseFin[] = {1450.06, 14458.62, 14539.14, 14514.11, 14452.06};
  int x;

  puts("Fermeture de la bourse :");
  for (x = 0; x < 4; x++)
    printf("jour %d: %.2f \n", x + 1, tabBourseFin[x]);
  return (0);
}
