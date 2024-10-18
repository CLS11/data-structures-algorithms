#include <stdio.h>
#include <stdlib.h>

// Traverse through the whole list and instead of storing the address of next
// node, store the previous ones.

struct Node {
  int data;
  struct Node *next;
};

struct Node *head;

struct Node* reverse(struct Node* head) {
  struct Node *current, *prev, *next;
  current = head;
  prev = NULL;
  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  return head;
}