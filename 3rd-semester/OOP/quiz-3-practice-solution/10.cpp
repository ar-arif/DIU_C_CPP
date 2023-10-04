#include <iostream>
using namespace std;
class Test3 {
public:
  int sum;
  int y;
  int arr[1] = {4};
  Test3() {
    sum = 0;
    y = 0;
  }
  void methodA() {
    int x = 2, y = 3;
    arr[0] = 3;
    y = this->y + arr[0];
    this->methodB(arr);
    x = this->y + arr[0];
    this->sum = x + y + arr[0];
    cout << x << " " << y << " " << this->sum << endl;
  }
  void methodB(int msg[]) {
    int x = 0, mg1 = 6;
    this->y = this->y + msg[0];
    x = x + 33 + mg1;
    this->sum = this->sum + x + this->y;
    msg[0] = this->y + mg1;
    mg1 = mg1 + x + 2;
    cout << x << " " << this->y << " " << this->sum << endl;
  }
};

int main() {
  Test3 t3;
  t3.methodA();
  t3.methodA();
  return 0;
}
