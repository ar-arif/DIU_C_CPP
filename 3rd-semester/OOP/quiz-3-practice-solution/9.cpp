#include <iostream>
using namespace std;
class Scope {
private:
  int x;
  int y;

public:
  Scope() {
    x = 10 % 2; // x = Last two digits of your ID % 2
    y = 10 % 5; // y = Last two digits of your ID % 5
  }
  void met1() {
    int x = 3;
    x = this->x + 1;
    this->y = this->y + this->x + 1;
    x = this->y + this->met2() + this->y;
    cout << x << " " << this->y << endl;
  }
  int met2() {
    int y = 0;
    cout << this->x << " " << y << endl;
    this->x = this->x + y;
    this->y = this->y + 200;
    return this->x + y;
  }
};
int main() {
  Scope q1, q2;
  q1.met1();
  q1.met2();
  q2.met1();
  q2.met2();
  return 0;
}