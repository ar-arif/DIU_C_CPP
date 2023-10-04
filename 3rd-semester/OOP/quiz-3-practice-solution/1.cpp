#include <iostream>
using namespace std;

class Employee {
public:
  string name, role;
  int id;
  double salary;

  Employee(string name, int id) {
    this->name = name;
    this->id = id;
  }

  void setRole(string role) { 
    this->role = role; 
  }
  void setSalary(double salary) { 
    this->salary = salary; 
  }

  double calculateTotalSalary(int total_hour) {

    double totalSalary = this->salary;
    if (total_hour > 150) {
      int extraHours = total_hour - 150;
      double bonus = extraHours * 2000.0;
      totalSalary = bonus + totalSalary;
    }
    return totalSalary;

  }
};

int main() {
  Employee mrNaim("Mr. Naim", 8215038);
  Employee mrFahim("Mr. Fahim", 8115036);

  mrNaim.setRole("Software Engineer");
  mrNaim.setSalary(45000);

  mrFahim.setRole("Project Lead");
  mrFahim.setSalary(120000);

  double mr_naim_total_salary = mrNaim.calculateTotalSalary(163);

  cout << "Mr Naim Total salary with bonus: " << mr_naim_total_salary << endl;
  return 0;
}