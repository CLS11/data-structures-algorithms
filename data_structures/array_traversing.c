#include<stdio.h>

void traversing(int a[10], int n){
	
	int i;

	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}

}
int main(){

	int a[10], n, i;

	printf("Enter the size of array\n");
	scanf("%d",&n);

	printf("Enter the elements in array\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	traversing(a,n);//traversing is iterating through each element of array.
	
	return 1;
}

