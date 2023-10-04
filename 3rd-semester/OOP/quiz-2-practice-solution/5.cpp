#include <iostream>
using namespace std;

class TaxiLagbe {
public:
  string taxiNumber;
  string area;
  string passengers[4];
  int passengerCount;

  TaxiLagbe(string taxiNumber, string area) {
    this->taxiNumber = taxiNumber;
    this->area = area;
    passengerCount = 0;
  }

  void addPassenger(string p1 = "", string p2 = "", string p3 = "",
                    string p4 = "") {

    int addedPassengers = 0;

    if (p1 != "" && passengerCount < 4) {
      passengers[passengerCount] = p1;
      passengerCount++;
      addedPassengers++;
    }
    if (p2 != "" && passengerCount < 4) {
      passengers[passengerCount] = p2;
      passengerCount++;
      addedPassengers++;
    }
    if (p3 != "" && passengerCount < 4) {
      passengers[passengerCount] = p3;
      passengerCount++;
      addedPassengers++;
    }
    if (p4 != "" && passengerCount < 4) {
      passengers[passengerCount] = p4;
      passengerCount++;
      addedPassengers++;
    }

    if (addedPassengers > 0) {
      for (int i = 0; i < addedPassengers; ++i) {
        cout << "Dear " << passengers[passengerCount - addedPassengers + i]
             << "! Welcome to TaxiLagbe." << endl;
      }
    } else {
      cout << "Taxi Full! No more passengers can be added." << endl;
    }
  }

  void printDetails() {
    cout << "Trip info for Taxi number: " << taxiNumber << endl;
    cout << "This taxi can only cover the " << area << " area." << endl;
    cout << "Total passengers: " << passengerCount << endl;
    cout << "Passenger lists:" << endl;
    for (int i = 0; i < passengerCount; i++) {
      cout << this->passengers[i];
      if (i < passengerCount - 1) {
        cout << ", ";
      }
    }
    cout << endl;
  }
};

int main() {

  TaxiLagbe t1("1010-01", "Dhaka");
  cout << "=================" << endl;

  t1.addPassenger("Walker", "Wood", "Matt");
  t1.addPassenger("Wilson");
  cout << "=================" << endl;
  t1.printDetails();
  cout << "=================" << endl;

  t1.addPassenger("Karen");
  cout << "=================" << endl;
  t1.printDetails();
  cout << "=================" << endl;

  TaxiLagbe t2("1010-02", "Khulna");
  cout << "=================" << endl;
  t2.addPassenger("Ronald", "Parker");
  cout << "=================" << endl;
  t2.printDetails();
  return 0;
}