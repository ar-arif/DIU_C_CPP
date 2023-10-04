#include <iostream>
using namespace std;
class Test {
public:
  int x;
  int y;
  Test() {
    x = 10 % 3; // x = Last two digits of your ID % 3
    y = 10 % 8; // y = Last two digits of your ID % 8
  }
  void methodA(int x) {
    x = this->x + 1;
    this->y = this->y + this->x + 1;
    this->x = this->y + this->methodB() + x;
    cout << this->x << " " << x << " " << this->y << endl;
  }
  int methodB() {
    int x = 11, y = 45;
    x = x + this->y;
    this->y = y + 300;
    cout << x << " " << y << " " << this->y << endl;
    return x + this->y;
  }
};
int main() {
  Test t1;
  t1.methodA(3);
  Test t2;
  t2.methodB();
  return 0;
}
