#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n < 1 || n > 1000) {
    printf("Invalid input size. Expected 1 <= n <= 1000.\n");
    return 1;
  }
  int arr[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
    if (arr[i] < 1 || arr[i] > 1000) {
      printf("Invalid input value at index %d. Expected 1 <= arr[i] <= 1000.\n",
             i);
      return 1;
    }
  }
  int start = 0;
  int end = n - 1;

  while (start < end) {

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[i]);
  }
}