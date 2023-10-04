#include <iostream>
using namespace std;
class Scope {
private:
  int x;
  int y;

public:
  Scope() {
    x = 10 % 3; // x = Last two digits of your ID % 3
    y = 10 % 8; // y = Last two digits of your ID % 8
  }
  void met1(int x, int y) {
    x = this->x + y;
    this->y = this->y + this->x + 1;
    x = this->y + x;
    y = this->x + this->y + x;
    cout << x << " " << this->y << " " << y << endl;
  }
  int met2(Scope m1) {
    int y = m1.x;
    cout << this->x << " " << m1.y << " ";
    m1.x = this->x + y;
    m1.y = this->y + 200;
    return this->x + m1.y;
  }
};
int main() {
  Scope q1, q2;
  q1.met1(2, 3);
  q2.met1(7, 8);
  cout << q1.met2(q2) << endl;
  return 0;
}
