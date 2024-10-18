#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} node;

node *create_node(node *head, int value) {
  node *new_node;
  new_node = (node *)malloc(sizeof(node));
  // Check the memory allocation
  if (new_node == NULL) {
    printf("No memory is allocated.\n");
  }
  new_node->data = value;
  new_node->next = NULL;
  if (head == NULL) {
    return new_node;
  } else {
    head->next = new_node;
    head = new_node;
  }
  return head;
}

void view_list(node *head) {
  node *p = head;
  while (p != NULL) {
    printf("%d\t", p->data);
    p = p->next;
  }
}

int main() {
  node *head = NULL;

  head = create_node(head, 2);
  head = create_node(head, 4);
  head = create_node(head, 6);

  view_list(head);
}