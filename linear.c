#include <stdio.h>

int linear_search(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i;
    }
  }

  return -1; // Target not found
}

int main() {
  int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 23;

  int index = linear_search(arr, n, target);

  if (index != -1) {
    printf("Target found at index %d\n", index);
  } else {
    printf("Target not found\n");
  }

  return 0;
}

