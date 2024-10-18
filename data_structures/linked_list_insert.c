#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};
struct Node *head; // Global variable marking the start of the list.

void insert(int x) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = head;
  head = temp;
}

void print() {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d\t", temp->data);
    temp = temp->next;
  }
}

int main() {
  head = NULL; // Empty list
  int n, i, x;
  printf("The total numbers needed in a list\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Enter the values for storing in node\n");
    scanf("%d", &x);
    insert(x);
    print();
  }
}