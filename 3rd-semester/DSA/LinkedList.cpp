#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
  Node *head;

  LinkedList() : head(nullptr) {}

  // Function to add a new element to the end of the list
  void add(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr)
      head = newNode;
    else {
      Node *current = head;
      while (current->next != nullptr)
        current = current->next;
      current->next = newNode;
    }
  }

  // Function to remove an element from the list
  void remove(int value) {
    if (head == nullptr) {
      cout << "The list is empty. Cannot delete." << endl;
      return;
    }

    if (head->data == value) {
      Node *temp = head;
      head = head->next;
      delete temp;
      cout << "Deleted: " << value << endl;
      return;
    }

    Node *current = head;
    Node *prev = nullptr;

    while (current != nullptr && current->data != value) {
      prev = current;
      current = current->next;
    }

    if (current == nullptr) {
      cout << "Not found: " << value << endl;
      return;
    }

    prev->next = current->next;
    delete current;
    cout << "Deleted: " << value << endl;
  }

  // Function to count the number of elements in the list
  void count() {
    int count = 0;
    Node *current = head;
    while (current != nullptr) {
      count++;
      current = current->next;
    }
    cout << "Count: " << count << endl;
  }

  // Function to find the position of an element in the list
  void findPosition(int value) {
    int position = 1;
    Node *current = head;

    while (current != nullptr) {
      if (current->data == value) {
        cout << "Position: " << position << endl;
        return;
      }
      position++;
      current = current->next;
    }

    cout << "Not found: " << value << endl;
  }

  // Function to search for an element in the list
  void search(int value) {
    int index = 0;
    Node *current = head;
    bool found = false;

    while (current != nullptr) {
      if (current->data == value) {
        found = true;
        break;
      }
      index++;
      current = current->next;
    }

    if (found) {
      cout << "Found at index: " << index << endl;
    } else {
      cout << "Not found: " << value << endl;
    }
  }

  // Function to display the elements of the list
  void display() {
    Node *current = head;
    while (current != nullptr) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

// Do not touch this part of this code

int main() {
  LinkedList l1;
  l1.add(1);
  l1.add(2);
  l1.add(3);
  l1.add(4);
  l1.add(5);
  l1.display();
  l1.findPosition(2);
  l1.count();
  l1.remove(3);
  l1.display();
  l1.count();
  l1.search(5);
  l1.search(0);
}
