#include <stdio.h>
#define SET 3

void quick() {}

int main() {
  int arr[SET];
  int i;

  printf("Input %d number of elements in the array :\n", SET);
  for (i = 0; i < SET; i++)
    scanf("%3d", &arr[i]);

  printf("The elements in the array are : \n");
  for (i = 0; i < SET; i++)
    printf("% 3d", arr[i]);

  quick();
  for (i = 0; i < SET; i++)
    printf("%3d", arr[i]);
  putchar('\n');

  return (0);
}
