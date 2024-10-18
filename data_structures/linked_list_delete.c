#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head;

void insert(int data, int n) {
  struct Node *temp1 = (struct Node *)malloc(sizeof(struct Node));
  temp1->data = data;
  temp1->next = NULL;
  if (n == 1) {
    temp1->next = head;
    head = temp1;
    return;
  }
  struct Node *temp2 = head;
  for (int i = 0; i < n - 2; i++) {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void print() {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d\t", temp->data);
    temp = temp->next;
  }
}

void delete(int n) {
  struct Node *temp1 = head;
  int i;
  if (n == 1) {
    head = temp1->next;
    free(temp1);
    return;
  }
  for (i = 0; i < n - 2; i++) {
    temp1 = temp1->next;
  }
  struct Node *temp2 = temp1->next;
  temp1->next = temp2->next;
  free(temp2);
}

int main() {
  head = NULL;
  insert(1, 1);
  insert(2, 2);
  insert(3, 3);
  insert(4, 4);
  int n;
  printf("Enter the position\n");
  scanf("%d", &n);
  delete (n);
  print();
}