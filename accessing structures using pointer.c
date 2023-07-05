#include<stdio.h>

struct person{
	int age;
	float weight;
};
int main(){
	struct person *personPtr,person1;
	personPtr = &person1;
	
	printf("Enter the age: ");
	scanf("%d",&personPtr->age);
	
	printf("Enter the weight: ");
	scanf("%f",&personPtr->weight);
	
	printf("displaying: \n");
	printf("age: %d\n",personPtr->age);
	printf("weight: %f",personPtr->weight);
	
	return 0;
}
