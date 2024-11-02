#include <math.h>
#include <stdio.h>

int main() {
  float r, v;

  printf("Indiquez la valeur fractionnaire :");
  scanf("%f", &v);
  r = sqrt(v);
  printf("racine caree de %.2f=%.2f\n", v, r);
  r = pow(v, 3);
  printf("%.2f puissance cubique = %2.f\n", v, r);
  r = floor(v);
  printf("Arrondi par defaut de %.2f %.2f\n", v, r);
  r = ceil(v);
  printf("Arrondi par exces de %.2f = %.2f\n", v, r);

  return (0);
}
