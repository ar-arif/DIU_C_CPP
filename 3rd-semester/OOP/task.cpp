#include <conio.h>
#include <iostream>
using namespace std;

class Car {
public:
  string owner;
  string brand;
  string model;
  int year;
  string color;

  Car(string owner, string brand, string model, int year, string color) {
    this->owner = owner;
    this->brand = brand;
    this->model = model;
    this->year = year;
    this->color = color;
  }
  void display() {
    cout << this->owner << "'s Car Information:"
         << "\n";
    cout << "Brand: " << this->brand << "\n";
    cout << "Model: " << this->model << "\n";
    cout << "Year: " << this->year << "\n";
    cout << "Color: " << this->color << "\n\n";
  }
};

int main() {
  Car arif_car("Arif", "Toyota", "Camry", 2022, "Black");
  Car miraj_car("Miraj", "Ford", "Mustang", 2023, "Blue");
  Car tonmoy_car("Tonmoy", "Chevrolet", "Equinox", 2022, "White");

  arif_car.display();
  miraj_car.display();
  tonmoy_car.display();

  return 0;
}