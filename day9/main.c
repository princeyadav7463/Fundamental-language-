//Exaple Working of pointers.
/*
#include<stdio.h>
int main()
{
	int *pc , c;
	c=22;
	printf("Addres of c=%p\n",&c);
	printf("Value of c=%d\n\n",c);
	pc=&c;
	printf("Address of pointer pc=%p\n",pc);
	printf("Content of pointer pc=%d\n\n",*pc);
	c=11;
	printf("Addres of pointer pc = %p\n",pc);
	printf("Content of pointer= %d\n\n",*pc);
	*pc=2;
	printf("Addres of c=%p\n",&c);
	printf("Value of c=%d\n\n",c);
	return 0;
}

*/


//Example Relationship between arrays and pointers.
/*
#include<stdio.h>
int main(){
	int x[4];
	int i;
	for(i=0;i<4;i++){
		printf("&x[%d]=%d\n",i,&x[i]);
	}
	printf("Address of array x= %p",x);
	return 0;
}

*/
//Example pass addresses to functions.
/*
#include<stdio.h>
void swap(int *n1,int *n2);
int main(){
	int num1=5,num2=10;
	swap(&num1,&num2);
	printf("num1=%d\n",num1);
	printf("num2=%d\n",num2);
	return 0;
}
void swap(int*n1,int*n2){
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
*/

// Example passing pointers to functions.
/*
#include<stdio.h>
void addOne(int*ptr){
	(*ptr)++;
}
int main(){
	int*p,i=10;
	p=&i;
	addOne(p);
	printf("%d",*p);
	return 0;
}
*/

// Wrtite a program in c to add two numbers using pointers.
/*
#include<stdio.h>
int main(){
	int fno, sno,*ptr,*qtr,sum;
	printf("\n\n pointer = Add two number=\n");
	printf("%d",&fno);
	
	printf("input the first number=");
	scanf("%d",&sno);
	
	ptr=&fno;
	qtr=&sno;
	sum=*ptr+*qtr;
	printf("The sum of the entered numbers is=%d\n\n",sum);
	return 0;
}

*/

// Write a program in c to print thw element of an array in reverse order.
/*
#include<stdio.h>
void main(){
	int n,i,arr1[15];
	int *ptr;
	printf("Input the number of element to store in the array (max15)=");
	scanf("%d",&n);
	ptr= &arr1[0];
	printf("Input %d number of elements in the array\n",n);
	for(i=0;i<n;i++){
		printf("Element %d=",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&arr1[n-1];
	printf("\n The elements of array in reverse order are=");
	for(i=n;i>0;i--){
		printf("\n elements %d=%d",i,*ptr);
		ptr--;
	}
	printf("\n\n");
}
*/

//Calculate the average of array elements.
/*
#include<stdio.h>
int main(){
	int n,i;
	float num[100],sum=0, avg;
	printf("Enter the numbers of elements=");
	scanf("%d",&n);
	while(n>100||n<1){
		printf("Error! number should in range of (1 to 100)\n");
		printf("Enter the number again=");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		printf("%d Enter number=",i+1);
		scanf("%f",&num[i]);
		sum=sum+num[i];
	}
	avg=sum/n;
	printf("Average=%2f",avg);
	return 0;
}
*/

//Calculate standard deviation.
/*
#include<stdio.h>
#include<math.h>
float calculateSD(float data[ ]);
int main(){
	int i;
	float data[10];
	printf("Enter 10 element=");
	for(i=0;i<10;i++)
	scanf("%f",&data[i]);
	printf("\n Standard Devlation=%.6f",calculateSD(data));
	return 0;
}
float calculateSD(float data[]){
float sum=0,mean,SD=0;
int i;
for(i=0;i<10;i++){
	sum=sum+data[i];
}	
mean=sum/10;
for(i=0;i<10;i++){
	SD=SD+pow(data[i]-mean,2);
}
return sqrt(SD/10);
}

*/

//Write to Add two matrices.
#include<stdio.h>
int main(){
	int r,c,a[100][100],b[100][100],sum[100][100],i,j;
	printf("Enter the number of rows(between 1 to 100)=");
	scanf("%d",&r);
	printf("Enter the number of columns(between 1 to 100)=");
	scanf("%d",&c);
	printf("\n Enter element of 1st martix=\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element a %d %d=",i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix=\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element b2 %d%d%d=",1+i,j+i);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n sum of two matrices=\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",sum[i][j]);
			if(j==c-1){
				printf("\n\n");
			}
		}
	}
	return 0;
}
