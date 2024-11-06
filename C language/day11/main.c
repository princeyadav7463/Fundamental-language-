//Program to calculate the sum of n numbers entered by the users.
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i, *ptr, sum=0;
	printf("Enter number of element=");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL){
		printf("Error! memory not allocated");
		exit(0);
	}
	printf("Enter element =");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("sum=%d",sum);
	free(ptr);
	return 0;
}

*/

// Reallocated with a new size.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,i,n;
	p=(int*)calloc(4,sizeof(int));
	for(i=0;i<4;i++){
		printf("\n Enter elements=");
		scanf("\n %d",p+i);
	}
	p=(int*)realloc(p,10);
	for(i=4;i<10;i++){
		printf("\n Enter elements=");
		scanf("%d",p+i);
	}
	for(i=0;i<10;i++){
		printf("\n %d",(p+i));
	}
	free(p);
	return 0;
}

