#include<stdio.h>
#include<stdlib.h>

struct Car{
	char color[50];
	int numberOfDoors,Sits;
};

int main(){
	int n=2,i;
	struct Car *ptr;
	ptr = (struct Car*)malloc(n*sizeof(struct Car));
	if(ptr == NULL){
		printf("Error !!! the memory not allocated...");
		exit(0);
	}
		printf("Enter Values of member elements of Car 1: \n");
		scanf("%s%d%d", &(ptr+i)->color,&(ptr + i)->numberOfDoors,&(ptr+i)->Sits);
		
		printf("Enter Values of member elements of Car 2: \n");
		scanf("%s%d%d", &(ptr+i)->color,&(ptr + i)->numberOfDoors,&(ptr+i)->Sits);

	
	printf("Values you gave for car 1: \n");
   printf("Color: %s\nnumberOfDoors: %d\nsits: %d\n", (ptr+i)->color,(ptr + i)->numberOfDoors,(ptr+i)->Sits);
   printf("Values you gave for car 1: \n");
   printf("Color: %s\nnumberOfDoors: %d\nsits: %d\n", (ptr+i)->color,(ptr + i)->numberOfDoors,(ptr+i)->Sits);
   
	return 0;
	
	
}
