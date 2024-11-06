// Write a program to multiply two matrices.
/*
#include<stdio.h>
int main(){
	int a[5][5],b[5][5],c[5][5],n,x,y,z;
	printf("Enter the value of n(n,=5)=");
	scanf("%d",&n);
	printf("Enter the elements of matrix-1=");
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			scanf("%d",&a[x][y]);
		}
	}
	printf("Enter the element of matrix-2=\n");
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			scanf("%d",&b[x][y]);
		}
	}
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			c[x][y]=0;
			for(z=0;z<n;z++){
				for(z=0;z<n;z++){
					c[x][y]+=a[x][z]*b[z][y];
				}
			}
		}
		printf("The product of the two matrix is=\n");
		for(x=0;x<n;x++){
			for(y=0;y<n;y++){
				printf("%d\t",c[x][y]);
			}
			printf("\n");
		}
	}
	return 0;
}

*/

//Write a program to find transpose of a matrix.
/*
#include<stdio.h>
int main(){
	int a[10][10],transpose[10][10],r,c;
	int i,j;
	printf("Enter rows and columns=");
	scanf("%d%d",&r,&c);
	printf("\n Enter matrix element :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element a %d %d %d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Entered matrix=\n");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d\t",a[i][j]);
		if(j==c-1){
			printf("\n");
		}
	}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			transpose[j][i]=a[i][j];
		}
	}
	printf("\n Transpose of the matrix=\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",transpose[i][j]);
			if(j==r-1){
				printf("\n");
			}
		}
	}
	return 0;
}
*/

//Access elements of an array using pointers.
/*
#include<stdio.h>
int main(){
	int i,data[5];
	printf("Enter elements=");
	for(i=0;i<5;i++){
		scanf("%d\n",data+i);
		}
		printf("Your Entered\n");
		for(i=0;i<5;i++){
		printf("%d\n",*(data+i));
	}
	return 0;
}
*/

//Swape number in the cyclic order using call by reference.
/*
#include<stdio.h>
void cyclicSwap(int *a,int *b,int *c);
int main(){
	int a,b,c;
	printf("Enter a b and c respectively=");
	scanf("%d%d%d",&a,&b,&c);
	printf("Value before swapping=\n");
	printf("a=%d\n b=%d\n c=%d",a,b,c);
	cyclicSwap(&a,&b,&c);
	printf("Value after swapping\n");
	printf("a=%d\n b=%d\n c=%d",a,b,c);
	return 0;
}
void cyclicSwap(int *n1, int *n2,int *n3){
	int temp;
	temp=*n2;
	*n2=n1;
	*n1=n3;
	*n3=temp;
}
*/

//Find the largest number (Dynamic memory allocation is used.

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	double *data;
	printf("Enter the total number of element=");
	scanf("%d",&n);
	data=(double*)calloc(n,sizeof(double));
	if(data==NULL){
		printf("Error! Memory not allocated");
		exit(0);
	}
	for(i=0;i<n;i++){
		printf("Enter number %d=",i+1);
		scanf("%f",data+i);
		for(i=0;i<n;i++){
			if(*data<*(data+i)){
				*data=*(data+i);
			}
		}
	}
		printf("Largest number = %f",*data);
		free(data);
	return 0;
}


