#include<stdio.h>
# define size 10

typedef struct stack{
	
	int s[size];
	int top;

} stack;

int peek(stack* st){

	if(st->top == -1){
	 return 2;
	}
	 
	 return st->s[st->top];
}

int main(){

	stack st;	
       	st.top = -1;
	
	if(peek(&st) == 2)
	  printf("Empty stack");	//it will give the output as empty stack since there are no elements in the stack

	else
	 printf("The element on top is %d",peek(&st));

	return 1;
}

