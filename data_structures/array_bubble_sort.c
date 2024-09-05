#include<stdio.h>

void bubble_sort(int a[10], int n){

	int i,j,temp;

	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			}
		}
	}

	for(i=0; i<n; i++)
	printf("%d\t",a[i]);
	
}


int main(){

	int a[10], n, i;

	printf("Enter the size of array\n");
	scanf("%d",&n);

	printf("Enter the elements in array\n");
	for(i=0; i<n; i++){
		scanf("%d\n",&a[i]);
	}

	bubble_sort(a,n);

	return 1;
}

