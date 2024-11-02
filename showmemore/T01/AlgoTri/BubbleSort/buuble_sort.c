#include <stdio.h>

#define SET 5
void fusion(int arr[], int left, int right, int middle) {
  int n1 = middle - left + 1;
  int n2 = right - middle;
  // déclaration des tableauxs a merger
  int L[n1], R[n2];
  // copie des différente donnée dans les sous tableauxs
  for (int i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[middle + 1];
  // fusion des sous tableauxs temporaire dans arr[left..right]
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;

    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = R[i];
    i++;
    k++;
  }
}

void fusionTri(int arr[], int left, int right) {
  if (left < right) {
    int middle = left + (right - left) / 2;

    fusionTri(arr, left, middle);
    fusionTri(arr, middle + 1, right);

    fusion(arr, left, middle, right);
  }
}

int main() {
  int arr[SET];
  int i, j, temp;

  printf("Input %d number of elements in the array :\n", SET);
  for (i = 0; i < SET; i++)
    scanf("%3d", &arr[i]);

  printf("The elements in the array are : \n");
  for (i = 0; i < SET; i++)
    printf("% 3d", arr[i]);

  fusionTri(arr, 0, SET - 1);
  for (i = 0; i < SET; i++)
    printf("%3d", arr[i]);
  putchar('\n');

  return (0);
}
