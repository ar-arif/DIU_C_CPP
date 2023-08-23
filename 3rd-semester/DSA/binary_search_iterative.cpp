#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target, int len) {
  int count = 1;
  while (low <= high) {
    // for (int i = 0; i < len; ++i) {
    int mid = low + (high - low) / 2;
    cout << count << ". low = " << low << ", mid = " << mid
         << ", high = " << high << endl;

    // Check if target is present at mid
    if (arr[mid] == target) {
      return mid;
    }

    // If target greater, ignore left
    if (arr[mid] < target) {
      low = mid + 1;
    }

    // If target is smaller, ignore right
    else {
      high = mid - 1;
    }
    count++;
  }
  return -1;
}
int main() {
  //  index = [0, 1, 2, 3, 4, 5, 6, 7, 8,  9]
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int len = sizeof(arr) / sizeof(arr[0]);
  int low = 0;
  int high = len - 1;
  int target = 0;

  cout << "Target = " << target << endl << endl;
  int result = binarySearch(arr, low, high, target, len);
  cout << endl << "Index = " << result << endl;
  return 0;
}