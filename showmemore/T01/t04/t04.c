#include <stdio.h>
#define SET 3
int main() {
  int arr1[SET], arr2[SET];
  int i;

  printf("Input %d elements in the array : \n", SET);
  for (i = 0; i < SET; i++)
    scanf("%3d", &arr1[i]);

  for (i = 0; i < SET; i++)
    arr2[i] = arr1[i];

  printf("The elements stored in first array are :\n");
  for (i = 0; i < SET; i++)
    printf("%3d", arr1[i]);

  printf("The elements copied in second array are :\n");
  for (i = 0; i < SET; i++)
    printf("%3d", arr2[i]);

  putchar('\n');

  return (0);
}
