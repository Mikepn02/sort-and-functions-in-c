#include <stdio.h>

void insertionSort(int arr[],int n){
	int i,j,key;
//	we start cheking at index 1
	for(i=1;i<n;i++){
		key = arr[i];
		j = i -1;
		
		while(j>=0 && arr[j]> key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

int main() {
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Array after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
