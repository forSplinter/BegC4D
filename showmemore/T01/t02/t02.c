#include <stdio.h>
#define SET 3

int main() {

  int arr[SET];
  int i;

  printf("Input %d number of elements in the array :\n", SET);
  for (i = 0; i < 3; i++)
    scanf("%d", &arr[i]);

  printf("\n The value stored in the array are: \n");
  for (i = 0; i < 3; i++)
    printf("% 3d", arr[i]);

  printf("\n\nThe value stor in the array in reverse are :");
  for (i = SET - 1; i >= 0; i--)
    printf("%3d", arr[i]);

  putchar('\n');
  return (0);
}
