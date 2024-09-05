#include<stdio.h>

int linear_search(int a[10], int n, int e){
	
	int i, pos;

	for(i=0; i<n; i++){
		if(a[i] == e)
		pos = i;
	}

	return pos;
}

int main(){

	int a[10], n, i, element;

	printf("Enter the size of array\n");
	scanf("%d",&n);

	printf("Enter the elements in array\n");
	for(i=0; i<n; i++){
		scanf("%d\n",&a[i]);
	}

	printf("Enter the element you want to insert\n");
	scanf("%d",&element);

	printf("The element %d is found at %d index",element, linear_search(a,n,element));

	return 1;
}

