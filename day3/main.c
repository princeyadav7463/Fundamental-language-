//Write a program to find number is Even or Odd.
/*
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n=");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("%d is Even number",n);
	}
	else{
		printf("%d is Odd number",n);
	}
	return 0;
}
*/
 // Write a program to find area of circle .
/* 
#include<stdio.h>
int main()
{
	float r , res;
	printf("Enter the radius of circle =");
	scanf("%f", &r);
	res=3.14*r*r;
	printf("Radious of circle is = %f",res);
	return 0;
}
*/
// Write a program to find area of rectangle .
/*
#include<stdio.h>
int main()
{
	float l,b,res;
	printf("Enter the value of l and b=");
	scanf("%f %f",&l,&b);
	res=l*b;
	printf("The area of rectangle=%f",res);
	return 0;
}
*/

// Write a program to find the area of trianlge.
/*
#include<stdio.h>
int main()
{
	float res, b,h;
	printf("Enter the value of b and h=");
	scanf("%f %f",&b,&h);
	res=(b*h)/2;
	printf("The Are of triangle=%f",res);
	return 0;
}

*/

// Write a program to find ascii value of character.
/*
#include<stdio.h>
int main()
{
	char c;
	printf("\n Enter the characters=");
	scanf("%c",&c);
	printf("\n Ascii value of character=%d",c);
	return 0;
}
*/
//C Loops Starts

// Write a program to print numbers 1 to 10.
/*
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		printf("\n%d",i);
	}
	
return 0;
}
*/

//Write a program to find out factorial of number.
/*
#include<stdio.h>
int main()
{
	int n,i;
	long fact=1;
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n Factorial is %li",fact);
	return 0;
}
*/

//Write a program to find out fibonacci series up to n.
/*
#include<stdio.h>
int main(){
	int n, i;
	int a=-1,b=1,c;
	
	printf("\nEnter Number =");
	scanf("\n%d",&n);
	
	printf("\n Fibonacci Series::=");
	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}
*/


//Write a program to find number of digit n numbers.
/*
#include<stdio.h>
int main()
{
	int val;
	int count=0;
	printf("\n Enter the number");
	scanf("\n %d",&val);
	while(val!=0)
	{
		val=val/10;
		count++;
	}
	printf("\n The number of digits are = %d", count);
	return 0;
}
*/
// Write a program to find Number is Perfect Number.

#include<stdio.h>
int main(){
	int num,i, sum=0;
	printf("Enter a positive integer=");
	scanf("%d",&num);
	if(num<=0){
		printf("Please enter a positive integer.\n");
	}else{
		for(i=1;i<num;i++){
			if(num%i==0){
				sum=sum+i;
			
			}
		}
		if(sum==num){
			printf("%d is a perfect number.\n",num);
		}else{
			printf("%d is not a perfect number.\n",num);
		}
	}
	return 0;
}
