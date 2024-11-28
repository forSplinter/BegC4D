#include <stdbool.h>
#include <stdio.h>
#define SET 8

void swap(int *p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}
void cocktail_sort(int arr[]) {
  int *start = arr;
  int *end = arr + SET - 1;
  int *p;
  bool swapped = true;

  while (swapped) {
    swapped = false;

    for (p = start; p < end; p++) {
      if (*p > *(p + 1)) {
        swap(p, p + 1);
        swapped = true;
      }
    }
    end--;
    if (!swapped)
      break;

    swapped = false;

    for (p = end; p > start; p--) {
      if (*p < *(p - 1)) {
        swap(p, p - 1);
        swapped = true;
      }
    }
    start++;
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
  cocktail_sort(arr);
  for (p = arr; p < arr + SET; p++)
    printf("%4d", *p);
  putchar('\n');

  return (0);
}
