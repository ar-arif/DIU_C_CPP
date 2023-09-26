#include <iostream>
using namespace std;

class Car {
public:
  string name;
  string color;
  string type;
  int model;

  Car(string n, string c) {
    name = n;
    color = c;
  }

  void updateType(string t) { 
    type = t; 
  }

  void display() {
    cout << "Car Name: " << name << endl;
    cout << "Color: " << color << endl;
    cout << "Car Type: " << type << endl;
    cout << "Model: " << model << endl;
  }
};

int main() {
  Car lamborghini("Lamborghini Aventador   S", "Orange");
  lamborghini.updateType("Sports Car");
  lamborghini.model = 2012;

  Car tesla("Tesla Cybertruck", "Gray");
  tesla.updateType("Pickup Truck");
  tesla.model = 2023;

  Car ford("Ford Mustang", "Silver");
  ford.updateType("Muscle Car");
  ford.model = 1964;

  lamborghini.display();
  cout << "==================" << endl;
  tesla.display();
  cout << "==================" << endl;
  ford.display();
  return 0;
}
