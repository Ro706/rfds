#include <stdio.h>
#include <stdlib.h>

void findUnion(int arr1[], int arr2[], int n1, int n2) {
  int *unionSet = (int *)malloc((n1 + n2) * sizeof(int));
  int k = 0;
  for (int i = 0; i < n1; i++) {
    int found = 0;
    for (int j = 0; j < k; j++) {
      if (unionSet[j] == arr1[i]) {
        found = 1;
        break;
      }
    }
    if (!found) {
      unionSet[k++] = arr1[i];
    }
  }
  for (int i = 0; i < n2; i++) {
    int found = 0;
    for (int j = 0; j < k; j++) {
      if (unionSet[j] == arr2[i]) {
        found = 1;
        break;
      }
    }
    if (!found) {
      unionSet[k++] = arr2[i];
    }
  }
  printf("Union of arrays:\n");
  for (int i = 0; i < k; i++) {
    printf("%d ", unionSet[i]);
  }
  free(unionSet);
}
int main() {
  int arr1[] = {2, 4, 5, 7};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[] = {1, 3, 6, 8};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  findUnion(arr1, arr2, n1, n2);
  return 0;
}

