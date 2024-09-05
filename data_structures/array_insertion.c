#include<stdio.h>

int insert(int a[10], int n, int p, int e){

	int i;

	if(p<0||p>n)
	printf("Invalid position."); //proofreading the position entered

	for(i=n; i>=p; i--){
		a[i+1]=a[i]; //shifting the elements to create space for the new element
	}

	a[p]=e; //element is inserted at the position desired
	n++;

	return n;
}

int main(){

	int a[10], n, i, pos, element;

	printf("Enter the size of array\n");
	scanf("%d",&n);

	printf("Enter the elements in array\n");
	for(i=0; i<n; i++){
		scanf("%d\n",&a[i]);
	}

	printf("Enter the element you want to insert\n");
	scanf("%d",&element);

	printf("Enter the position you want to insert the element at\n");
	scanf("%d",&pos);

	insert(a,n,pos,element); //inserting the element in the array

	for(i=0; i<n; i++)
	printf("%d\t",a[i]);

	return 1;
}

