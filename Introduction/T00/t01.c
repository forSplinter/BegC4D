#include <stdio.h>

int main() {
  int a;
  printf("give any year :");
  scanf("%d", &a);

  if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
    printf("Is a leap year");
  } else {
    printf("Isn't a leap year !");
  }
  return (0);
}
