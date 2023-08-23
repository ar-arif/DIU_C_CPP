#include <iostream>
using namespace std;

int count = 0;
int binarySearch(int arr[], int low, int high, int target) {
  count++;
  if (low <= high) {
    int mid = low + (high - low) / 2;
    cout << count << ". low = " << low << ", mid = " << mid
         << ", high = " << high << endl;

    // Check if target is present at mid
    if (arr[mid] == target) {
      return mid;
    }

    if (arr[mid] < target) {
      return binarySearch(arr, mid + 1, high, target);
    }

    return binarySearch(arr, low, mid - 1, target);
  }
  return -1;
}
int main() {
  //  index = [0, 1, 2, 3, 4, 5, 6, 7, 8,  9]
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int len = sizeof(arr) / sizeof(arr[0]);
  int low = 0;
  int high = len - 1;
  int target = 5;

  cout << "Target = " << target << endl << endl;
  int result = binarySearch(arr, low, high, target);
  cout << endl << "Index = " << result << endl;
  return 0;
}