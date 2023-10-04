#include <iostream>
using namespace std;

class Author {
public:
  int book_no = 0;
  string author_name, title, genre;
  Author() { cout << "A book can not be added without author name" << endl; }
  Author(string author_name) { this->author_name = author_name; }
  void setName(string author_name) { this->author_name = author_name; }
  void addBook(string title, string genre) {
    this->title = title;
    this->genre = genre;
    this->book_no++;
  }
  void printDetails() {
    cout << "Number of Book(s): " << book_no << endl;
    cout << "Author Name: " << author_name << endl;
    cout << "Author Name: " << author_name << endl;
    cout << genre << ": " << title << endl;
  }
};

int main() {
  Author a1;
  cout << "======================" << endl;
  a1.addBook("Ice", "Science Fiction");

  cout << "======================" << endl;
  a1.setName("Anna Kavan");
  a1.addBook("Ice", "Science Fiction");
  a1.printDetails();
  cout << "======================" << endl;

  Author a2("Humayun Ahmed");
  a2.addBook("Onnobhubon", "Science Fiction");
  a2.addBook("Megher Upor Bari", "Horror");
  cout << "======================" << endl;
  a2.printDetails();

  a2.addBook("Ireena", "Science Fiction");
  cout << "======================" << endl;
  a2.printDetails();
  cout << "======================" << endl;
  return 0;
}
