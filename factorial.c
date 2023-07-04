#include<stdio.h>

long factorial(int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n*factorial(n-1)
	}
}
int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    // Call the factorial function and print the result
    printf("The factorial of %d is %ld\n", number, factorial(number));

    return 0;
}
