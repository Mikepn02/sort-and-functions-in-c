#include <stdio.h>

// Pointer function to calculate the area of a rectangle
float calculateArea(float* length, float* width) {
    return (*length) * (*width);
}

int main() {
    float length, width;
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    float area = calculateArea(&length, &width);  // Passing the addresses of length and width variables
    
    printf("The area of the rectangle is: %.2f\n", area);
    
    return 0;
}

