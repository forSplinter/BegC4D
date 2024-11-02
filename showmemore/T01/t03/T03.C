#include <stdio.h>
#define SET 3

int main() {
  int a[SET], i;
  int count = 0;

  printf("Input %d elements in the array : \n", SET);
  for (i = 0; i < SET; i++)
    scanf("%3d", &a[i]);

  for (i = 0; i < SET; i++)
    count += a[i];
  printf("Sum of all elements in array is : %d\n", count);
  return (0);
}
