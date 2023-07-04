#include<stdio.h>

void swapnum(int* var1, int* var2) {
   int tempnum;
   tempnum = *var1;
   *var1 = *var2;
   *var2 = tempnum;
}

int main() {
   int num1 = 35, num2 = 45;

   printf("Before swapping:\n");
   printf("num1 value is %d\n", num1);
   printf("num2 value is %d\n", num2);

   // Calling the swap function
   swapnum(&num1, &num2);

   printf("After swapping:\n");
   printf("num1 value is %d\n", num1);
   printf("num2 value is %d\n", num2);

   return 0;
}

