#include<stdio.h>
#define size 10

//using a structure to implement stack.

typedef struct stack{

	int s[size],
	int top;
} stack;

//pushing an element in the stack

void push(stack *st, int x){

	if(st->top == size-1)
		printf("Stack is full.");
	else{
	st->top++;
	st->s[st->top] = x;
	}
}

void main(){
	
	stack st;
	st.top = -1;
	int element;

	printf("Enter the element you want to push in the stack\n");
	scanf("%d",&element);

	push(&st,element);

}
