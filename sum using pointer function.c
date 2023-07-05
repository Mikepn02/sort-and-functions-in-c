#include <stdio.h>

// Function that takes two integers and returns their sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer variable
    int (*sumPtr)(int, int);
    
    // Assign the address of the 'sum' function to the function pointer variable
    sumPtr = &sum;
    
    // Call the function using the function pointer
    int result = sumPtr(3, 4);
    
    printf("The sum is: %d\n", result);
    
    return 0;
}

