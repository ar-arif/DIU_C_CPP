#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n < 1 || n > 1000) {
    printf("Invalid input size. Expected 1 <= n <= 1000.\n");
    return 1;
  }
  int arr[n];
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &arr[i]);
    if (arr[i] < 1 || arr[i] > 1000) {
      printf("Invalid input value at index %d. Expected 1 <= arr[i] <= 1000.\n",
             i);
      return 1;
    }
    sum += arr[i];
  }
  printf("%d", sum);
}