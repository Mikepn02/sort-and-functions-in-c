#include<stdio.h>

void selectionSort(int arr[],int n){
	int i,j,minIndex,temp;
	
	for(i=0;i<n-1;i++){
		minIndex = i;
		for(j=i+1;j<n;j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
			temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}

int main(){
	int arr[] = {65,32,11,34,23,50};
	int i;
	int n= sizeof(arr) / sizeof(arr[0]);
	
	printf("array before sorting: \n");
	for(i = 0;i<n;i++){
		printf("%d",arr[i]);
		
	}
	printf("\n");
	
	selectionSort(arr,n);
	printf("Array after sorting is: ");
	for(i = 0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	return 0;
}
