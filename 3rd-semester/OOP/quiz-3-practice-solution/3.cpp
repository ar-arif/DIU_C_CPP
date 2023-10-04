#include <iostream>
using namespace std;

class Player {
public:
  string name, club, nation;
  int jersey;

  Player(string name, string club, string nation, int jersey) {
    this->name = name;
    this->club = club;
    this->nation = nation;
    this->jersey = jersey;
  }
  Player(string name, string nation, int jersey) {
    this->name = name;
    this->nation = nation;
    this->jersey = jersey;
    this->club = "No Club";
  }
  void showInfo() {
    cout << "Player Name: " << name << endl;
    cout << "Club: " << club << endl;
    cout << "Nation: " << nation << endl;
    cout << "Jersey: " << jersey << endl;
  }
  void showPosition(string pos1, string pos2, string pos3) {
    cout << name << "'s preferred positions are: " << pos1 << ", " << pos2
         << ", " << pos3 << endl;
  }
  void showPosition(string pos1, string pos2) {
    cout << name << "'s preferred positions are: " << pos1 << ", " << pos2
         << endl;
  }
  double calculateGoalRatio(double goals, double matches) {
    return goals / matches;
  }
};

int main() {
  Player p1("Lionel Messi", "Inter Miami", "Argentina", 10);
  p1.showInfo();
  cout << "====================" << endl;
  p1.showPosition("Attacking Midfielder", "Right Winger", "Center Forward");
  cout << "Goal Ratio: " << p1.calculateGoalRatio(819, 1041) << endl;
  cout << "====================" << endl;

  Player p2("Arjen Robben", "Netherlands", 11);
  p2.showInfo();
  cout << "====================" << endl;
  p2.showPosition("Right Winger", "Second Striker");
  cout << "Goal Ratio: " << p1.calculateGoalRatio(209, 614) << endl;
  cout << "====================" << endl;
  return 0;
}