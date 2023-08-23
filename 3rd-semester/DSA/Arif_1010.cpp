#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

int main() {
  Node *head = nullptr;
  Node *first = nullptr;
  Node *second = nullptr;
  Node *third = nullptr;
  Node *fourth = nullptr;
  Node *fifth = nullptr;

  first = new Node;
  second = new Node;
  third = new Node;
  fourth = new Node;
  fifth = new Node;

  first->data = 1;
  second->data = 2;
  third->data = 3;
  fourth->data = 4;
  fifth->data = 5;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = nullptr;

  head = first;

  cout << first->data << endl;
  cout << second->data << endl;
  cout << third->data << endl;
  cout << fourth->data << endl;
  cout << fifth->data << endl;

  delete first;
  delete second;
  delete third;
  delete fourth;
  delete fifth;

  return 0;
}
