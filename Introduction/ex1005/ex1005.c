#include <stdio.h>

void limiter(int stop) {
  int x;
  for (x = 0; x <= 100; x = x + 1) {
    printf("%d", x);
    if (x == stop) {
      puts("vous gagnez !");
      return;
    }
    if (stop == 10 && x == stop - 1) {
      puts("vous perdez");
      return;
    }
  }
}

int verifier(int valeur) {
  if (valeur >= 0 && valeur <= 100) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int s;

  printf("Indiquez une valeur pour stopper (0-100): ");
  scanf("%d", &s);

  if (verifier(s)) {
    limiter(s);
  } else {
    puts("Error : valeur is not between 0 and 100");
  }
  return (0);
}
