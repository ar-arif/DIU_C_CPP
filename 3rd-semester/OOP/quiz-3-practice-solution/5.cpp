#include <iostream>
using namespace std;

class HackathonTeam {
public:
  string team_name;
  string participants[3];
  HackathonTeam(string teamName, string p1) {
    team_name = teamName;
    participants[0] = p1;
  }
  HackathonTeam(string teamName, string p1, string p2) {
    team_name = teamName;
    participants[0] = p1;
    participants[1] = p2;
  }
  HackathonTeam(string teamName, string p1, string p2, string p3) {
    team_name = teamName;
    participants[0] = p1;
    participants[1] = p2;
    participants[2] = p3;
  }
  void information() {
    cout << "Team name: " << team_name << endl;
    cout << "Participants:" << endl;
    int i = 0;
    while (i < 3) {
      if (participants[i] == "") {
        break;
      }
      cout << participants[i] << endl;
      i++;
    }
  }
};

int main() {

  HackathonTeam t1("Atlantean", "Aquaman");
  t1.information();

  cout << "=================" << endl;

  HackathonTeam t2("Avengers", "Ironman", "Thor", "Hulk");
  t2.information();

  cout << "=================" << endl;

  HackathonTeam t3("X-Men", "Storm", "Mystique");
  t3.information();
  return 0;
}
