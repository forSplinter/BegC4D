#include <stdio.h>

#define SET 7

int main() {
  int arr[SET];
  int *p, *q, temp;

  printf("Input %d elements in the array \n", SET);
  for (p = arr; p < arr + SET; p++)
    scanf("%3d", p);
  printf("The elment in the array are : \n");
  for (p = arr; p < arr + SET; p++)
    printf("%3d", *p);

  printf("sorted array are :\n");
  for (p = arr; p < arr + SET - 1; p++) {
    int *index = p;
    for (q = p + 1; q < arr + SET; q++) {
      if (*q < *index) {
        index = q;
      }
    }
    if (index != p) {
      temp = *p;
      *p = *index;
      *index = temp;
    }
  }
  for (p = arr; p < arr + SET; p++)
    printf("%3d", *p);
  putchar('\n');

  return 0;
}
