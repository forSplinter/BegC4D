#include <stdio.h>

int main() {
  int a;
  printf("Enter your age : ");
  scanf("%d", &a);

  if (a < 21) {
    printf("You aren't eligble for casting vote \n");
  } else {
    printf("Congratulation! you are eligble for casting vote \n");
  }
  return (0);
}
