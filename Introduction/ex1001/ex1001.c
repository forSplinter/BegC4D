#include <stdio.h>

void prompt() { printf("C:\\DOS>"); }

void busy() {
  int loop = 0;
  char input[32];

  while (loop < 5) {
    prompt();
    fgets(input, 31, stdin);
    loop++;
  }
}

int main() {
  busy();
  return (0);
}
