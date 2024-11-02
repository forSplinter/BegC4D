#include <stdio.h>

int main() {
  int a, b, c;
  printf("Chose three number : ");
  scanf("%d %d %d", &a, &b, &c);

  printf("1st number : %d, \t 2nd number : %d, \t 3rd number : %d\n", a, b, c);

  if (a > b) {
    if (a > c) {
      printf("1st number is the greater !\n");
    } else {
      printf("3st number is the greater !\n");
    }
  } else if (b > c) {
    printf("2nd number is the greater !\n");
  } else {
    printf("3rd number is the greater !\n");
  }
  return (0);
}
