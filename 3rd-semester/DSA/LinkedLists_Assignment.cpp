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
public:
  Node *head;

  LinkedList() { head = nullptr; }

  // function to add an element to the list
  void add_element(int d) {
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

  // function to delete an element from the list
  void delete_element(int d) {
    // Check if the list is empty
    if (head == nullptr) {
      cout << "List is empty. Cannot delete." << endl;
      return;
    }

    // Check if the element to be deleted is at the head of the list
    if (head->data == d) {
      Node *temp = head;
      head = head->next;
      delete temp;
      cout << "Element " << d << " has been deleted from the list." << endl;
      return;
    }

    // Traverse the list to find the element to be deleted
    Node *current = head;
    Node *previous = nullptr;

    while (current != nullptr && current->data != d) {
      previous = current;
      current = current->next;
    }

    // If the element is not found in the list
    if (current == nullptr) {
      cout << "Element " << d << " not found in the list." << endl;
      return;
    }

    // Delete the element
    previous->next = current->next;
    delete current;
    cout << "Element " << d << " has been deleted from the list." << endl;
  }

  // function to count the elements of the list
  void count_element() {
    int count = 0;
    Node *current = head;
    while (current != nullptr) {
      count++;
      current = current->next;
    }
    cout << "Number of elements in the list: " << count << endl;
  }

  // function to get the specific position of an element from the list
  void get_position(int d) {
    int position = 1;
    Node *current = head;

    while (current != nullptr) {
      if (current->data == d) {
        cout << "Element " << d << " is at position " << position << endl;
        return;
      }
      position++;
      current = current->next;
    }

    cout << "Element " << d << " not found in the list." << endl;
  }

  // function to search an element in the list
  void linear_search(int d) {
    int index = 0;
    Node *current = head;
    bool found = false;

    while (current != nullptr) {
      if (current->data == d) {
        found = true;
        break; // Exit the loop if the element is found
      }
      index++;
      current = current->next;
    }

    if (found) {
      cout << "Element " << d << " found at index " << index << endl;
    } else {
      cout << "Element " << d << " not found in the list." << endl;
    }
  }

  // function to print the elements of the list
  void display_list() {
    Node *current = head;
    while (current != nullptr) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << "" << endl;
  }
};

// Do not touch this part of this code

// int main() {
//   // Asking user the length of the list
//   cout << "How many elements you want to insert? " << endl;
//   int n;
//   cin >> n;

//   // Defining an empty list with no elements
//   LinkedList new_list;

//   // Taking inputs for the list and inserting into list
//   for (int i = 1; i <= n; i++) {

//     // Taking element input from user
//     cout << "Enter the element: " << endl;
//     int x;
//     cin >> x;

//     // Inserting element into list
//     new_list.add_element(x);
//   }
//   cout << "After inserting, the output is: " << endl;
//   // Printing the list
//   new_list.display_list();
//   // Counting the elements of the list
//   new_list.count_element();

//   // Delete an element from the list
//   cout << "Enter the element to delete: " << endl;
//   int y;
//   cin >> y;
//   new_list.delete_element(y);

//   cout << "After deleting, the output is: " << endl;
//   // Printing the list
//   new_list.display_list();
//   // Counting the elements of the list
//   new_list.count_element();

//   // Get the position of an element
//   cout << "Enter the element to get position: " << endl;
//   int z;
//   cin >> z;
//   new_list.get_position(z);

//   // Search an element
//   cout << "Enter the element you want to search: " << endl;
//   int k;
//   cin >> k;
//   new_list.linear_search(k);

//   return 0;
// }

int main() {
  LinkedList l1;
  l1.add_element(1);
  l1.add_element(2);
  l1.add_element(3);
  l1.add_element(4);
  l1.add_element(5);
  l1.display_list();
  l1.get_position(2);
  l1.count_element();
  l1.delete_element(3);
  l1.display_list();
  l1.count_element();
  l1.linear_search(5);
  l1.linear_search(0);
}