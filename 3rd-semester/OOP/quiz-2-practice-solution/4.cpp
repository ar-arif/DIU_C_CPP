#include <iostream>
using namespace std;

class Superhero {
public:
  string superhero_name;
  string origin;
  string gadgets[2];
  Superhero(string superhero_name, string origin) {
    this->superhero_name = superhero_name;
    this->origin = origin;
  }
  void information() {
    cout << "Superhero Name: " << superhero_name << endl;
    cout << "Origin: " << origin << endl;
  }
  string addGadgets(string g1) {
    this->gadgets[0] = g1;
    return "Aquaman you got a " + gadgets[0] + "!\n";
  }
  string addGadgets(string g1, string g2) {
    this->gadgets[0] = g1;
    this->gadgets[1] = g2;
    return "Aquaman you got a " + gadgets[0] + " and a " + gadgets[0] + "!\n";
  }
};

int main() {

  Superhero s1("Aquaman", "DC Comics");
  s1.information();
  cout << "=================" << endl;

  Superhero s2("Batman", "DC Comics");
  s2.information();
  cout << "=================" << endl;

  cout << s1.addGadgets("Trident") << endl;
  cout << "=================" << endl;

  cout << s2.addGadgets("Batmobile, Batpod") << endl;
  cout << "=================" << endl;
  return 0;
}