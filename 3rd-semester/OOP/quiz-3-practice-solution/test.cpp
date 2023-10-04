#include <iostream>
using namespace std;

int main() {
  int x = 10 % 3; // x = Last two digits of your ID % 3
  int y = 10 % 8; // y = Last two digits of your ID % 8
  cout << x << " " << y << endl;
  return 0;
}