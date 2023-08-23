#include <iostream>
using namespace std;

int main() {
  int len;
  cout << "Enter the lenght of Array: ";
  cin >> len;
  int arr[len];
  for (int i = 0; i < len; ++i) {
    cout << "Enter the nuber for [" << i << "] index of Array: ";
    cin >> arr[i];
  }
  for (int i = 0; i < len; ++i) {
    cout << i << ": " << arr[i] << endl;
  }
  return 0;
}
