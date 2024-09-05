#include<stdio.h>

int delete(int a[10], int n, int p){

	int i;

	if(p<0||p>n)
	printf("Invalid position."); //proofreading the position entered

	for(i=p; i<n; i++){
		a[i]=a[i+1]; //shifting to delete the element
	}

	n--; //element is deleted from the position desired

	return n;
}

int main(){

	int a[10], n, i, pos;

	printf("Enter the size of array\n");
	scanf("%d",&n);

	printf("Enter the elements in array\n");
	for(i=0; i<n; i++){
		scanf("%d\n",&a[i]);
	}

	printf("Enter the position you want to delete the element from\n");
	scanf("%d",&pos);

	delete(a,n,pos); //deleting the element in the array

	for(i=0; i<n; i++)
	printf("%d\t",a[i]);

	return 1;
}

