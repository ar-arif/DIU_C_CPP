#include <iostream>
using namespace std;

class Test {
public:
  int x, y, sum;

  Test(int a, int b) {
    x = a + 12;
    y = b - 5;
    sum = x + y;
  }

  void methodC(int p, int q) {
    int z = 63;
    this->x = (++p) + q + z;
    this->y = this->y + this->x + z;
    sum = sum + this->x + this->y;
    cout << this->x << " " << this->y << " " << sum << endl;
  }
};

int main() {
  Test t1(1, 2);
  t1.methodC(36, 43);
  Test t2(3, 4);
  t2.methodC(12, 23);
}
