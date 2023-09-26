#include <iostream>
using namespace std;

// Node class represents an element in a singly linked list.
class Node {
public:
  int data;
  Node *next;

  // Constructor to initialize a Node with data and set the next pointer to
  // nullptr.
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};

// LinkedList class represents a singly linked list.
class LinkedList {
public:
  Node *head;

  // Constructor to initialize an empty linked list with a null head.
  LinkedList() { head = nullptr; }

  // Adds a new Node with the given data to the end of the linked list.
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

  // Reverses the linked list in-place.
  void reverse_list() {
    Node *previous = nullptr;
    Node *current = head;
    Node *next = nullptr;

    while (current != nullptr) {
      next = current->next;
      current->next = previous;
      previous = current;
      current = next;
    }

    head = previous;
  }

  // Moves the last Node to the front of the linked list.
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

  // Prints the elements of the linked list.
  void print() {
    Node *temp = head;
    while (temp != nullptr) {
      cout << temp->data << " ";
      temp = temp->next;
    }

    cout << endl;
  }

  // Finds and returns the middle Node of the linked list.
  Node *find_middle_node(Node *head) {
    if (head == nullptr || head->next == nullptr) {
      return head;
    }

    Node *slow_pointer = head;
    Node *fast_pointer = head;

    while (fast_pointer != nullptr && fast_pointer->next != nullptr) {
      slow_pointer = slow_pointer->next;
      fast_pointer = fast_pointer->next->next;
    }

    if (fast_pointer == nullptr) {
      return slow_pointer;
    } else {
      return slow_pointer->next;
    }
  }

  // Inserts a Node with the given data at the front of the linked list.
  void insert_front(int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
  }

  // Returns the size of the linked list.
  int get_size() {
    int size = 0;
    Node *current = head;
    while (current != nullptr) {
      size++;
      current = current->next;
    }

    return size;
  }

  // Inserts a Node with the given data at the specified position in the linked
  // list.
  void insert_middle(int data, int position) {
    if (position < 0 || position > get_size()) {
      return;
    }

    Node *newNode = new Node(data);

    if (position == 0) {
      insert_front(data);
    } else {
      Node *current = head;
      for (int i = 0; i < position - 1; i++) {
        current = current->next;
      }

      newNode->next = current->next;
      current->next = newNode;
    }
  }

  // Inserts a Node with the given data at the end of the linked list.
  void insert_end(int data) {
    Node *newNode = new Node(data);

    if (head == nullptr) {
      head = newNode;
    } else {
      Node *current = head;
      while (current->next != nullptr) {
        current = current->next;
      }

      current->next = newNode;
    }
  }

  // Deletes the first Node in the linked list.
  void delete_front(Node *&head) {
    if (head == nullptr) {
      return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
  }

  // Deletes the Node at the specified position in the linked list.
  void delete_middle(Node *&head, int position) {
    if (head == nullptr || position < 0 || position >= get_size()) {
      return;
    }

    if (position == 0) {
      delete_front(head);
    } else {
      Node *current = head;
      Node *previous = nullptr;
      for (int i = 0; i < position; i++) {
        previous = current;
        current = current->next;
      }

      previous->next = current->next;
      delete current;
    }
  }

  // Deletes the last Node in the linked list.
  void delete_end(Node *&head) {
    if (head == nullptr) {
      return;
    }

    if (head->next == nullptr) {
      delete head;
      head = nullptr;
    } else {
      Node *current = head;
      Node *previous = nullptr;
      while (current->next != nullptr) {
        previous = current;
        current = current->next;
      }

      previous->next = nullptr;
      delete current;
    }
  }
};

// Checks if a given string is a palindrome.
bool palindrome_checker(string s) {
  int low = 0;
  int high = s.length() - 1;

  while (low < high) {
    if (s[low] != s[high]) {
      return false;
    }

    low++;
    high--;
  }

  return true;
}

// Stack class represents a stack data structure.
class Stack {
public:
  int *arr;
  int size;
  int top;

  // Constructor to initialize an empty stack with a default size of 10.
  Stack(int s) {
    size = s;
    arr = new int[size];
    top = -1;
  }

  // Pushes an element onto the stack.
  void push(int data) {
    if (top == size - 1) {
      // Resize the stack if it's full.
      cout << "Stack is Full" << endl;
      return;
    }
    top++;
    arr[top] = data;
  }

  // Pops the top element from the stack.
  int pop() {
    if (top == -1) {
      // Stack is empty.
      cout << "Stack is empty" << endl;
      return -1;
    }

    int data = arr[top];
    top--;
    return data;
  }

  // Returns the value of the top element on the stack without popping it.
  int peek() {
    if (top == -1) {
      // Stack is empty.
      return -1;
    }

    return arr[top];
  }

  // Checks if the stack is empty.
  bool isEmpty() { return top == -1; }
};

int main() {
  LinkedList list;

  // Add elements to the linked list.
  list.add(1);
  list.add(2);
  list.add(3);
  list.add(4);
  list.add(5);
  list.add(6);

  // Reverse the linked list.
  list.reverse_list();

  // // Check if "mom" is a palindrome and print the result.
  string palindrome_checker_output = palindrome_checker("mom") == true
                                         ? "it's palindrome"
                                         : "it's not palindrome";
  cout << palindrome_checker_output << endl;

  // Move the last node to the front of the linked list.
  list.move_last_node_to_front();

  // Print the linked list.
  list.print();

  // Find and print the middle node of the linked list.
  Node *middle_node = list.find_middle_node(list.head);
  cout << middle_node->data;

  // Insert a node at the front of the linked list.
  list.insert_front(10);

  // Insert a node in the middle of the linked list.
  list.insert_middle(20, 1);

  // Insert a node at the end of the linked list.
  list.insert_end(30);

  // Print the linked list.
  list.print();

  // Add more elements to the linked list.
  list.add(10);
  list.add(20);
  list.add(30);
  list.add(40);
  list.add(50);

  // Delete the first node in the linked list.
  list.delete_front(list.head);

  // Delete the node at the middle position in the linked list.
  list.delete_middle(list.head, 2);

  // Delete the last node in the linked list.
  list.delete_end(list.head);

  // Print the modified linked list.
  list.print();

  // Create a stack.
  Stack stack(10);

  // Push some elements onto the stack.
  stack.push(10);
  stack.push(20);
  stack.push(30);

  // Pop an element from the stack and print it.
  int element = stack.pop();
  cout << "stack.pop(): " << element << endl;

  // Peek at the top element on the stack and print it.
  int topElement = stack.peek();
  cout << "stack.peek(): " << topElement << endl;

  // Check if the stack is empty and print the result.
  bool isEmpty = stack.isEmpty();
  cout << "isEmpty: " << isEmpty << endl;
}