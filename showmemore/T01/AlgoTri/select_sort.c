#include <stdio.h>

#define SET 7

int main() {
  int arr[SET];
  int i, j, temp;
  int index = 0;

  printf("Input %d number of elements in the array :\n", SET);
  for (i = 0; i < SET; i++)
    scanf("%3d", &arr[i]);

  printf("The elements in the array are : \n");
  for (i = 0; i < SET; i++)
    printf("% 3d", arr[i]);

  printf("The array sorted are : \n");
  for (i = 0; i < SET; i++) {
    index = i;
    for (j = i + 1; j < SET; j++) {
      if (arr[j] < arr[index]) {
        index = j;
      }
    }
    if (index != i) {
      temp = arr[i];
      arr[i] = arr[index];
      arr[index] = temp;
    }
  }
  for (i = 0; i < SET; i++)
    printf("%3d", arr[i]);
  putchar('\n');

  return (0);
}
