#include <stdbool.h>
#include <stdio.h>
#define SET 8

void swap(int *p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}
void bubble(int arr[]) {
  int *p;
  for (p = arr; p < arr + SET - 1; p++) {
    if (*p > *(p + 1)) {
      swap(p, p + 1);
    }
  }
}

int main() {
  int arr[SET];
  int *p;

  printf("Input %d number of elements in the array :\n", SET);
  for (p = arr; p < arr + SET; p++)
    scanf("%4d", p);

  printf("The elements in the array are : \n");
  for (p = arr; p < arr + SET; p++)
    printf("% 4d", *p);

  printf("sorted array are : \n");
  bubble(arr);
  for (p = arr; p < arr + SET; p++)
    printf("%4d", *p);
  putchar('\n');

  return (0);
}
