#include <stdio.h>

int main() {
  int m, n, k;

  printf("Enter arr1 size: ");
  scanf("%d", &m);

  printf("Enter arr2 size: ");
  scanf("%d", &n);

  k = m + n;

  int arr1[m];
  int arr2[n];
  int marg[k];

  // Read elements into arr1
  for (int i = 0; i < m; i++) {
    printf("Enter arr1 element %d: ", i + 1);
    scanf("%d", &arr1[i]);
  }

  // Read elements into arr2
  for (int i = 0; i < n; i++) {
    printf("Enter arr2 element %d: ", i + 1);
    scanf("%d", &arr2[i]);
  }

  // Merge arr1 and arr2 into marg
  int i = 0;
  int j = 0;
  int l = 0; 
  while (i < m) {
    marg[j++] = arr1[i++];
  }

  while (j < k) {
    marg[j++] = arr2[l++];
  }

  // Print the merged array
  for (int i = 0; i < k; i++) {
    printf("%d ", marg[i]);
  }

  return 0;
}

