#include<stdio.h>
int fibonacci(int n);
int main(){
	int index,result;
	printf("Please enter the index (n) of the Fibonacci sequence: ");
    scanf("%d", &index);
    
    result = fibonacci(index);
	printf("The element at index %d in the Fibonacci sequence is: %d\n", index, result);
    
    return 0;
}

int fibonacci(int n){
	if(n == 0){
		return 0;
	}
	else if(n==1){
		return 1;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
