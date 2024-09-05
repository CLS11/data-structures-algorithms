#include<stdio.h>

void selection_sort(int a[10], int n){

	int i,j,temp,s;

	for(i=0; i<n-1; i++){
	 s=i;
		for(j=i+1; j<n; j++){
			if(a[s] > a[j]){
			 s=j;
			}
		}
		if(s != i){
		 temp = a[i];
		 a[i] = a[s];
		 a[s] = temp;
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

	selection_sort(a,n);

	return 1;
}

