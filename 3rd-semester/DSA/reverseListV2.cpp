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

  LinkedList() { this->head = nullptr; }

  void add(int d) {
    Node *newNode = new Node(d);
    // If the list is empty, make the new node the head
    if (head == nullptr)
      head = newNode;
    else {
      // Otherwise, traverse the list to find the last node and add the new node
      // to its 'next'
      Node *current = head;
      while (current->next != nullptr)
        current = current->next;
      current->next = newNode;
    }
  }

  void reverse() {
    // Initialize three pointers: previous, current, and next
    Node *previous = nullptr;
    Node *current = head;
    Node *next = nullptr;

    // Iterate through the linked list
    while (current != nullptr) {
      // Store the next node in the next pointer
      next = current->next;

      // Reverse the link between the current node and the previous node
      current->next = previous;

      // Update the previous and current pointers
      previous = current;
      current = next;
    }

    // Set the head of the linked list to the new previous pointer
    head = previous;
  }

  void print() {
    // Initialize a temporary pointer to the head of the linked list
    Node *temp = head;

    // Iterate through the linked list and print the data of each node
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }

    // Print a newline at the end of the list
    cout << endl;
  }
};

int main() {
  // Create a new linked list object
  LinkedList list;

  // Insert elements into the linked list
  list.add(1);
  list.add(2);
  list.add(3);

  // Reverse the linked list
  list.reverse();

  // Print the linked list
  list.print();

  return 0;
}
