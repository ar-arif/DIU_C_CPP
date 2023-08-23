#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int len;
  cout << "Enter the len for Array: ";
  cin >> len;
  int arr[len];
  for (int i = 0; i < len; ++i) {
    cout << "Enter the value for [" << i << "] index: ";
    cin >> arr[i];
  }
  int low = 0, high = len - 1, mid, count = 1;
  int value;
  cout << "Enter the value for Binary searching: ";
  cin >> value;
  for (int i = 0; i < len; ++i) {
    mid = low + (high - low) / 2;
    if (arr[mid] == value) {
      cout << "Search Found [" << value << "] at [" << i << "] index with ["
           << count << "] times loop" << endl;
      break;
    } else if (arr[mid] < value) {
      low = mid + 1;
    } else if (arr[mid] > value) {
      high = mid - 1;
    }
    cout << "\n\t mid = " << mid << "\n" << endl;
    count++;
  }
}
