#include <stdio.h>
#include <stdlib.h>

int main() {
  int array[10];
  int x;

  printf("Input 10 elements in the array : \n");
  for (x = 0; x < 10; x++) {
    printf("Elements - %d : ", x);
    scanf("%d", &array[x]);
  }
  printf("Elements in array are :");
  for (x = 0; x < 10; x++)
    printf("%d ", array[x]);
  putchar('\n');
  return (0);
}
