#include<stdio.h>
#include<string.h>

typedef struct{
	char name[50];
	int salary;
}emp;

void main(){
	emp e1;
	printf("\nEnter the employee record: \n");
	printf("\nEmployee name: \n");
	fgets(e1.name,sizeof(e1.name),stdin);
	printf("\nEnter the employee salary\n");
	scanf("%d",&e1.salary);
	printf("\nEmployee name is %s ",e1.name);
	printf("\nSalary is %d\n",e1.salary);
}
