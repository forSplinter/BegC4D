#include <stdio.h>
#include <stdlib.h>

int main() {
  char *entrance, *output, *new_input, *new_output;

  entrance = (char *)malloc(sizeof(char) * 1024);
  output = (char *)malloc(sizeof(char) * 1024);
  if (entrance == NULL || output == NULL) {
    puts("Allocation impossible sale fdp !");
    exit(1);
  }
  puts("Saisissez quelque chose d'un peu long :");
  fgets(entrance, 1023, stdin);

  new_input = entrance;
  new_output = output;
  while (*new_input != '\n') {
    *new_output = *new_input;
    new_output++;
    new_input++;
  }
  *new_output = '\0';

  puts("You wrote : ");
  printf("\"%s\"\n", output);

  return 0;
}
