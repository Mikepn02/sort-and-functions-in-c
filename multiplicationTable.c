#include<stdio.h>
int main(){
int n,i;
printf("Enter an enteger: ");
scanf("%d",&n);
for(i=1;i<=n;++i){
printf("%d * %d = %d \n",n,i,n*i);
}
	return 0;
}
