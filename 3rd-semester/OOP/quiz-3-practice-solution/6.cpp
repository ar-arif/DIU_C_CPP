#include <iostream>
using namespace std;

class Customer {
public:
  int price = 0;
  int tickets = 0;

  Customer() { cout << "Welcome to ABC Memorial Park" << endl; }

  void buyTicket(string name, int age) {
    if (tickets < 3) {
      if (age > 10) {
        price += 100;
      } else {
        price += 50;
      }
      cout << "Successfully purchased a ticket for " << name << "!" << endl;
      tickets++;
    } else {
      cout << "You can't buy more than 3 tickets" << endl;
    }
  }

  void showDetails() {
    cout << "Amount of tickets: " << tickets << endl;
    cout << "Total price: " << price << " Taka" << endl;
  }
};

int main()

{
  cout << "1-------------------------" << endl;
  Customer c1;
  cout << "2-------------------------" << endl;
  c1.buyTicket("Bob", 23);
  c1.buyTicket("Henry", 7);
  c1.buyTicket("Alexa", 30);
  c1.buyTicket("Jonas", 30);
  cout << "3-------------------------" << endl;
  c1.showDetails();
  cout << "4-------------------------" << endl;
  Customer c2;
  cout << "5-------------------------" << endl;
  c2.buyTicket("Harry", 60);
  c2.buyTicket("Tomas", 28);
  cout << "6-------------------------" << endl;
  c2.showDetails();
  return 0;
}
