#include <conio.h>
#include <iostream>
using namespace std;

class Car {
public:
  string brand;
  string model;
  int year;
  string color;
};

int main() {
  Car tonmoy_car;
  Car arif_car;
  Car miraj_car;
  cout << "tonmoy Enter your desire (Brand, Model, year, color): ";
  cin >> tonmoy_car.brand >> tonmoy_car.model >> tonmoy_car.year >>
      tonmoy_car.color;

  cout << "Arif Enter your desire (Brand, Model, year, color): ";
  cin >> tonmoy_car.brand >> tonmoy_car.model >> tonmoy_car.year >>
      tonmoy_car.color;

  cout << "Miraj Enter your desire (Brand, Model, year, color): ";
  cin >> tonmoy_car.brand >> tonmoy_car.model >> tonmoy_car.year >>
      tonmoy_car.color;

  return 0;
}