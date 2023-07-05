#include <stdio.h>

union item
{
int a; 
char ch;
};
int main( )
{
union item it; 
it.a = 12;
printf("a: %d \n", it.a);  
it.ch = 'z';
printf("c: %c\n", it.ch);
// Checking for corruption in memory
 printf("a: %d\n", it.a);
printf("c: %c\n", it.ch);
return 0;
}

