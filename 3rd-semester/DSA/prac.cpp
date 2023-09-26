#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

class LinkedList {
public:
  Node *head;

  LinkedList() { head = nullptr; }

  void add(int d) {
    Node *newNode = new Node(d);
    if (head == nullptr)
      head = newNode;
    else {
      Node *current = head;
      while (current->next != nullptr)
        current = current->next;
      current->next = newNode;
    }
  }

  void move_last_node_to_front() {
    if (head == nullptr || head->next == nullptr) {
      return;
    }

    Node *current = head;
    Node *previous = nullptr;
    while (current->next != nullptr) {
      previous = current;
      current = current->next;
    }

    previous->next = nullptr;
    current->next = head;
    head = current;
  }

  void print() {
    Node *temp = head;
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }

    cout << endl;
  }
};

int main() {
  LinkedList list;

  list.add(1);
  list.add(2);
  list.add(3);
  list.add(4);
  list.add(5);

  // Move the last node to the front
  list.move_last_node_to_front();

  // Print the linked list
  list.print();
}
