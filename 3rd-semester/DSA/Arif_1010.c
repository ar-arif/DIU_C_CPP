#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

int main() {
  struct Node *head = NULL;
  struct Node *first = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;
  struct Node *fourth = NULL;
  struct Node *fifth = NULL;

  first = malloc(sizeof(struct Node));
  second = malloc(sizeof(struct Node));
  third = malloc(sizeof(struct Node));
  fourth = malloc(sizeof(struct Node));
  fifth = malloc(sizeof(struct Node));

  first->data = 1;
  second->data = 2;
  third->data = 3;
  fourth->data = 4;
  fifth->data = 5;

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = NULL;

  head = first;

  printf("%d\n", first->data);
  printf("%d\n", second->data);
  printf("%d\n", third->data);
  printf("%d\n", fourth->data);
  printf("%d\n", fifth->data);

  free(first);
  free(second);
  free(third);
  free(fourth);
  free(fifth);

  return 0;
}