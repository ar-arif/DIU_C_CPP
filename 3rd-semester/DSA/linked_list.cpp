#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int d) {
    data = d;
    next = nullptr;
  }
};

class LinkedList {
private:
  Node *head;

public:
  LinkedList() { head = nullptr; }

  void createList(int d) {
    Node *n = new Node(d);
    if (head == nullptr) {
      head = n;
    } else {
      Node *current = head;
      while (current->next != nullptr) {
        current = current->next;
      }
      current->next = n;
    }
  }

  void displayList() {
    Node *current = head;
    while (current != nullptr) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
  void countList() {
    Node *current = head;
    int count = 0;
    while (current != nullptr) {
      current = current->next;
      count++;
    }
    cout << "Count: " << count << endl;
    cout << endl;
  }
};

int main() {
  LinkedList newList;
  newList.createList(11);
  newList.createList(2);
  newList.createList(9);
  newList.createList(12);

  newList.displayList();
  newList.countList();
  return 0;
}