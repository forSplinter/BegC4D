#include <stdio.h>
#include <string.h>

int main() {
  char Username[32];

  while (1) {
    printf("Input a Username (at least 8 characters) : ");
    scanf("%s", Username);

    if (strlen(Username) >= 8) {
      break;
    } else {
      printf("Enter a valid Username \n");
    }
    while (getchar() != '\n')
      ;
  }
  printf("your Username is %s\n", Username);
  return (0);
}
