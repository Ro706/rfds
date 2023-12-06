#include <stdio.h>

int recursive_binary_search(int arr[], int low, int high, int target) {
  if (low > high) {
    return -1; // Target not found
  }

  int mid = low + (high - low) / 2;

  if (arr[mid] == target) {
    return mid;
  } else if (arr[mid] < target) {
    return recursive_binary_search(arr, mid + 1, high, target);
  } else {
    return recursive_binary_search(arr, low, mid - 1, target);
  }
}

int main() {
  int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 23;

  int index = recursive_binary_search(arr, 0, n - 1, target);

  if (index != -1) {
    printf("Target found at index %d\n", index);
  } else {
    printf("Target not found\n");
  }

  return 0;
}

