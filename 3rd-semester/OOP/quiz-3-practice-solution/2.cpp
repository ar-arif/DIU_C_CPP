#include <iostream>
using namespace std;

class Student {
public:
  string name, dept, id;
  float cgpa;

  Student(string name, string id, string dept) {
    this->name = name;
    this->id = id;
    this->dept = dept;
  }

  void setCGPA(float cgpa) { this->cgpa = cgpa; }

  void checkCGPA() {
    if (this->cgpa > 3) {
      cout << "Your result is satisfactory." << endl;
    } else {
      cout << "You need improvement." << endl;
    }
  }
  void display() {
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
    cout << "Department: " << this->dept << endl;
    cout << "CGPA: " << this->cgpa << endl;
  }
};

int main() {
  Student sameha("Sameha Islam", "21-05-043", "ITM");

  sameha.setCGPA(3.6);

  sameha.checkCGPA();

  sameha.display();

  return 0;
}