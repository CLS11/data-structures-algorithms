#include<stdio.h>

void insertion_sort(int a[10], int n){

	int i,j,temp;

	for(i=1; i<n; i++){ //starting with the second element and then checking with the first and if smaller than swap
	 temp = a[i];
		for(j=i-1; j>=n; j--){ //moves behind i
			if(a[j] > a[temp]){
			 a[j+1] = a[j];
			}
			else
			 break;
		}
		a[j+1] = temp;
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

	insertion_sort(a,n);

	return 1;
}

