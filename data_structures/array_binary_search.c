#include<stdio.h>

int binary_search(int a[10], int n, int e){
	
	int i, pos, mid, high, low;

	mid = (high+low)/2;
	high = n-1;
	low = 0;

	while(low <= high){
	if(a[mid] == e)
	 pos = mid;
	else if(a[mid] > e)
	 high = mid-1;
	else if(a[mid] < e)
	 low = mid+1;
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

	printf("Enter the element you want to search\n");
	scanf("%d",&element);

	printf("The element %d is found at %d index",element, binary_search(a,n,element));

	return 1;
}

