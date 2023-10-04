#include <iostream>
using namespace std;

class Test {
public:
  double x, y, z;
  Test(int x, int y) {
    this->x = x;
    this->y = y;
  }
  Test(double x, double y) {
    this->x = x;
    this->y = y;
  }
  Test(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  void printDetails() {
    cout << "x: " << this->x << endl;
    cout << "y: " << this->y << endl;
  }
  int add(int a, int b) { return a + b; }
};
int main() {

  Test t1(34, 23);
  cout << "=================" << endl;
  t1.printDetails();

  int sum = t1.add(t1.x, t1.y);
  cout << "Sum: " << sum << endl;
  cout << "=================" << endl;

  Test t2(54.3, 16.9);
  cout << "=================" << endl;
  t2.printDetails();

  cout << "Sum: " << t2.add(t2.x, t2.y) << endl;
  cout << "=================" << endl;

  Test t3(5.33, 7.64, 8.55);
  cout << "=================" << endl;
  t3.printDetails();

  cout << "Sum: " << t3.add(t3.x, t3.y) << endl;
  cout << "=================" << endl;
}
