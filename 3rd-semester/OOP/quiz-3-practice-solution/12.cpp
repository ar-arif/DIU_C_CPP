#include <iostream>
using namespace std;
class Employee {
private:
  int salary;

public:
  string name;
  string role;
  string dept;

  Employee(string name, string role, string dept) {
    this->name = name;
    this->role = role;
    this->dept = dept;
  }

  void display() {
    cout << "Name: " << name << endl;
    cout << "Role: " << role << endl;
    cout << "Department: " << dept << endl;
  }

  void setSalary(int salary) { this->salary = salary; }

  int getSalary() { return this->salary; }
};

int main() {
  Employee e1("Tanzim Islam", "Manager", "Marketing");
  e1.display();
  e1.setSalary(150000);
  cout << "Salary: " << e1.getSalary() << endl;
}
