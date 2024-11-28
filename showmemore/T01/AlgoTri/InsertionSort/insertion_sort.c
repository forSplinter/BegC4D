#include <stdio.h>
#define SET 8
void swap(int *p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}
void insert(int arr[]) {
  int *p, *q;
  for (p = arr + 1; p < arr + SET; p++) {
    for (q = p; q > arr && *q < *(q - 1); q--) {
      swap(q, q - 1);
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
  insert(arr);
  for (p = arr; p < arr + SET; p++)
    printf("%4d", *p);
  putchar('\n');

  return (0);
}
